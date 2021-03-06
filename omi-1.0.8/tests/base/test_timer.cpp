/*
**==============================================================================
**
** Open Management Infrastructure (OMI)
**
** Copyright (c) Microsoft Corporation
** 
** Licensed under the Apache License, Version 2.0 (the "License"); you may not 
** use this file except in compliance with the License. You may obtain a copy 
** of the License at 
**
**     http://www.apache.org/licenses/LICENSE-2.0 
**
** THIS CODE IS PROVIDED *AS IS* BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
** KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION ANY IMPLIED 
** WARRANTIES OR CONDITIONS OF TITLE, FITNESS FOR A PARTICULAR PURPOSE, 
** MERCHANTABLITY OR NON-INFRINGEMENT. 
**
** See the Apache 2 License for the specific language governing permissions 
** and limitations under the License.
**
**==============================================================================
*/

#include <ut/ut.h>
#include <base/Strand.h>
#include <pal/sleep.h>

#if defined(CONFIG_OS_WINDOWS)
#include <windows.h>
#endif

using namespace std;

struct TimerFakeStrand
{
    Strand strand;

    MI_Uint32 callbackCounter;
    PAL_Uint64 timeoutTime;
    TimerReason reason;
};

NITS_EXTERN_C void TimerTest_Post_NO_OP( _In_ Strand* self_, _In_ Message* msg)
{
    MI_UNUSED( msg );
    MI_UNUSED(self_);
}

NITS_EXTERN_C void TimerTest_PostControl_NO_OP( _In_ Strand* self, _In_ Message* msg)
{
    MI_UNUSED( self );
    MI_UNUSED( msg );
}

NITS_EXTERN_C void TimerTest_Ack_NO_OP( _In_ Strand* self )
{
    MI_UNUSED( self );
}

NITS_EXTERN_C void TimerTest_Close_NO_OP( _In_ Strand* self_ )
{
    MI_UNUSED( self_ );
}

NITS_EXTERN_C void TimerTest_Finish_NO_OP( _In_ Strand* self_ )
{
    MI_UNUSED( self_ );
}

NITS_EXTERN_C void TimerTest_UserCallback(
    _In_ Strand* self,
    TimerReason reason)
{
    TimerFakeStrand* fakeStrand = (TimerFakeStrand*)self;

    fakeStrand->callbackCounter++;
    fakeStrand->reason = reason;

    NitsAssert( MI_TRUE == PAL_Time(&fakeStrand->timeoutTime), PAL_T("Unable to get end time") );    
}

/*
 * StrandFT functions and table for a faked "Left" side of an interaction.
 */
static StrandFT TimerTest_Left_InteractionFT =
{
    TimerTest_Post_NO_OP, 
    TimerTest_PostControl_NO_OP, 
    TimerTest_Ack_NO_OP,
    NULL, 
    TimerTest_Close_NO_OP,
    TimerTest_Finish_NO_OP,
    TimerTest_UserCallback,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL 
};

Selector testSelector;  // For POSIX implementations
TimerFakeStrand timerTestStrand; // Implemented as a "left" strand

static const MI_Uint64 FIFTY_MILLISECONDS_AS_USEC = 50 * 1000;
static const MI_Uint64 SIXTY_SECONDS_AS_USEC = 60 * 1000 * 1000;


//
// Basic checks on uninitialized structures.
//
NitsTest0(TimerTest_CloseOrFire_on_Uninitialized_Does_Nothing)
{
    Timer timer;

    memset( &timer, 0, sizeof(Timer) );

    Timer_Close( &timer );
    NitsAssert( TimerReason_Expired == timer.reason, PAL_T("Value should not be changed") );

    Timer_Fire( &timer, &timerTestStrand.strand, TimerReason_ManuallyFired );
    NitsAssert( TimerReason_Expired == timer.reason, PAL_T("Value should not be changed") );
}
NitsEndTest

STRAND_DEBUGNAME(TestTimer);

//
// Initializes a Selector and Strand for timer tests.
//
NitsSetup0(TimerTest_SetupSelectorAndStrand, NitsEmptyStruct)
{        
    // Note: This is not required for Windows, but it is included for test uniformity
    memset( &testSelector, 0, sizeof(Selector) );

    NitsAssert( MI_RESULT_OK == Selector_Init( &testSelector ), PAL_T("Unable to initialize Selector") );

    Timer_SetSelector(&testSelector);

    // Strand initialization is needed for all test flavors
    memset( &timerTestStrand, 0, sizeof(TimerFakeStrand) );
    Strand_Init( STRAND_DEBUG(TestTimer) &timerTestStrand.strand, &TimerTest_Left_InteractionFT, STRAND_FLAG_ENTERSTRAND, NULL );
}
NitsEndSetup

NitsCleanup(TimerTest_SetupSelectorAndStrand)
{
    // Posix-specific test cleanup
    Selector_Destroy( &testSelector );
    Timer_SetSelector( NULL );
}
NitsEndCleanup

//
// Verifies that a timeout occurs within a reasonable amount of time after the
// specified time.
//
NitsTest1(TimerTest_BasicTimeout_Success, TimerTest_SetupSelectorAndStrand, NitsEmptyValue)
{
    NitsFaultSimMarkForRerun;
    Timer timer;
    PAL_Uint64 startTimeUsec = 0;

    memset( &timer, 0, sizeof(Timer) );

    timerTestStrand.callbackCounter = 0;
    NitsAssert( MI_TRUE == PAL_Time(&startTimeUsec), PAL_T("Unable to get start time") );    

    Strand_StartTimer( &timerTestStrand.strand, &timer, FIFTY_MILLISECONDS_AS_USEC );
    Strand_Leave( &timerTestStrand.strand );

    while (0 == timerTestStrand.callbackCounter)
    {
        // This is specific to non-Windows, but it acts as a wait loop for Windows
        // as well depending on the length of the timeout value.
        Selector_Run( &testSelector, SELECT_BASE_TIMEOUT_MSEC * 1000, MI_FALSE );
    }

    // "Natural" because it was not manually triggered
    NitsAssert( TimerReason_Expired == timerTestStrand.reason, PAL_T("Triggered flag not set correctly") );
    NitsAssert( 1 == timerTestStrand.callbackCounter, PAL_T("Only one callback call expected") );

#if defined(_POSIX_TIMERS) && (_POSIX_TIMERS > 0) && defined(_POSIX_MONOTONIC_CLOCK) && (_POSIX_MONOTONIC_CLOCK > 0)
    /* Verify that the timeout occurred after waiting at least 50 milliseconds.
     * This is only done if monotonic timers are used because they provide reliable
     * values for time.  gettimeofdat does not and will cause periodic failures of this test. */
    NitsAssert( timerTestStrand.timeoutTime-startTimeUsec >= FIFTY_MILLISECONDS_AS_USEC, PAL_T("Timeout took shorter than expected") );
#endif
}
NitsEndTest

//
// Verifies that Strand_FireTimer works in a normal scenario.
//
NitsTest1(TimerTest_BasicFireTimer, TimerTest_SetupSelectorAndStrand, NitsEmptyValue)
{
    NitsFaultSimMarkForRerun;
    Timer timer;
    PAL_Uint64 startTimeUsec = 0;

    memset( &timer, 0, sizeof(Timer) );

    timerTestStrand.callbackCounter = 0;
    NitsAssert( MI_TRUE == PAL_Time(&startTimeUsec), PAL_T("Unable to get start time") );    

    Strand_StartTimer( &timerTestStrand.strand, &timer, SIXTY_SECONDS_AS_USEC ); // Large value to ensure that the timer gets manually triggered.  The system will not actually wait this long unless the test case fails.
    Strand_Leave( &timerTestStrand.strand );

    // Manually trigger the timer early
    Timer_Fire( &timer, &timerTestStrand.strand, TimerReason_ManuallyFired );

    while (0 == timerTestStrand.callbackCounter)
    {
        // This is specific to non-Windows, but it acts as a wait loop for Windows
        // as well depending on the length of the timeout value.
        Selector_Run( &testSelector, SELECT_BASE_TIMEOUT_MSEC * 1000, MI_FALSE );
    }

    // Manually triggered, so it is not "natural."
    NitsAssert( TimerReason_ManuallyFired == timerTestStrand.reason, PAL_T("Triggered flag not set correctly") );
    NitsAssert( 1 == timerTestStrand.callbackCounter, PAL_T("Only one callback call expected") );
}
NitsEndTest

//
// Verifies that the timer is fired/closed uppon strand finish.
//
NitsTest1(TimerTest_StrandFinish, TimerTest_SetupSelectorAndStrand, NitsEmptyValue)
{
    NitsFaultSimMarkForRerun;
    Timer timer;
    PAL_Uint64 startTimeUsec = 0;

    memset( &timer, 0, sizeof(Timer) );

    timerTestStrand.callbackCounter = 0;
    NitsAssert( MI_TRUE == PAL_Time(&startTimeUsec), PAL_T("Unable to get start time") );    

    Strand_StartTimer( &timerTestStrand.strand, &timer, SIXTY_SECONDS_AS_USEC ); // Large value to ensure that the timer gets canceled.  The system will not actually wait this long unless the test case fails.

    // Simutlate closed interaction
    timerTestStrand.strand.info.thisAckPending = timerTestStrand.strand.info.otherAckPending = MI_FALSE;
    timerTestStrand.strand.info.thisClosedOther = timerTestStrand.strand.info.otherClosedThis = MI_TRUE;
    
    Strand_Leave( &timerTestStrand.strand );

    while (0 == timerTestStrand.callbackCounter)
    {
        // This is specific to non-Windows, but it acts as a wait loop for Windows
        // as well depending on the length of the timeout value.
        Selector_Run( &testSelector, SELECT_BASE_TIMEOUT_MSEC * 1000, MI_FALSE );
    }
    
    // It should be Canceled
    NitsAssert( TimerReason_Canceled == timerTestStrand.reason, PAL_T("Triggered flag not set correctly") );
    NitsAssert( 1 == timerTestStrand.callbackCounter, PAL_T("Only one callback call expected") );
}
NitsEndTest


//
// Verifies that it is OK to have Strand_FireTimer called twice prior to the 
// Strand's timer method getting called.  This simulates a race between two
// threads to trigger a timer.
//
NitsTest1(TimerTest_DoubleFireTimer, TimerTest_SetupSelectorAndStrand, NitsEmptyValue)
{
    NitsFaultSimMarkForRerun;
    Timer timer;
    PAL_Uint64 startTimeUsec = 0;

    memset( &timer, 0, sizeof(Timer) );

    timerTestStrand.callbackCounter = 0;
    NitsAssert( MI_TRUE == PAL_Time(&startTimeUsec), PAL_T("Unable to get start time") );    

    Strand_StartTimer( &timerTestStrand.strand, &timer, SIXTY_SECONDS_AS_USEC ); // Large value to ensure that the timer gets manually triggered.  The system will not actually wait this long unless the test case fails.
    Strand_Leave( &timerTestStrand.strand );

    // Manually trigger the timer early twice
    Timer_Fire( &timer, &timerTestStrand.strand, TimerReason_ManuallyFired );
    Timer_Fire( &timer, &timerTestStrand.strand, TimerReason_ManuallyFired );

    while (0 == timerTestStrand.callbackCounter)
    {
        // This is specific to non-Windows, but it acts as a wait loop for Windows
        // as well depending on the length of the timeout value.
        Selector_Run( &testSelector, SELECT_BASE_TIMEOUT_MSEC * 1000, MI_FALSE );
    }

    // Manually triggered, so it is not a "natural" timeout
    NitsAssert( TimerReason_ManuallyFired == timerTestStrand.reason, PAL_T("Triggered flag not set correctly") );
    NitsAssert( 1 == timerTestStrand.callbackCounter, PAL_T("Only one callback call expected") );
}
NitsEndTest

//
// Verifies that calling Timer_Start twice has no effect on the timer's timeout.
//
NitsTest1(TimerTest_DoubleStart, TimerTest_SetupSelectorAndStrand, NitsEmptyValue)
{
    NitsFaultSimMarkForRerun;
    Timer timer;
    PAL_Uint64 startTimeUsec = 0;

    memset( &timer, 0, sizeof(Timer) );

    timerTestStrand.callbackCounter = 0;
    NitsAssert( MI_TRUE == PAL_Time(&startTimeUsec), PAL_T("Unable to get start time") );

    Strand_StartTimer( &timerTestStrand.strand, &timer, FIFTY_MILLISECONDS_AS_USEC );
    Strand_Leave( &timerTestStrand.strand );

    // Manually call Timer_Start a second time.  It should fail and not interfere
    // with the timer already started.
    NitsAssert( TimerResult_InvalidArgument == Timer_Start( &timer, &timerTestStrand.strand ), PAL_T("Start while already running not supported") );

    while (0 == timerTestStrand.callbackCounter)
    {
        // This is specific to non-Windows, but it acts as a wait loop for Windows
        // as well depending on the length of the timeout value.
        Selector_Run( &testSelector, SELECT_BASE_TIMEOUT_MSEC * 1000, MI_FALSE );
    }

    // "Natural" because it was not manually triggered
    NitsAssert( TimerReason_Expired == timerTestStrand.reason, PAL_T("Triggered flag not set correctly") );
    NitsAssert( 1 == timerTestStrand.callbackCounter, PAL_T("Only one callback call expected") );

#if defined(_POSIX_TIMERS) && (_POSIX_TIMERS > 0) && defined(_POSIX_MONOTONIC_CLOCK) && (_POSIX_MONOTONIC_CLOCK > 0)
        /* Verify that the timeout occurred after waiting at least 50 milliseconds.
         * This is only done if monotonic timers are used because they provide reliable
         * values for time.  gettimeofdat does not and will cause periodic failures of this test. */
    NitsAssert( timerTestStrand.timeoutTime-startTimeUsec >= FIFTY_MILLISECONDS_AS_USEC, PAL_T("Timeout took shorter than expected") );
#endif
}
NitsEndTest


#if defined(CONFIG_POSIX)

NitsTest0(TimerTest_Start_Without_Selector_Fails_Posix)
{
    Timer timer;

    memset( &timer, 0, sizeof(Timer) );

    TimerResult result = Timer_Start( &timer, &timerTestStrand.strand );

    NitsAssert( TimerResult_InvalidArgument == result, PAL_T("Selector required for operation") );
}
NitsEndTest

#endif // #if defined(CONFIG_POSIX)
