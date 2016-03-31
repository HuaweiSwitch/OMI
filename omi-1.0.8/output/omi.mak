CONFIG_PREFIX=/opt/omi-1.0.8
LIBDIR=$(OMI_ROOT)//opt/omi-1.0.8/lib
BINDIR=$(OMI_ROOT)//opt/omi-1.0.8/bin
INCLUDEDIR=$(OMI_ROOT)//opt/omi-1.0.8/include
SYSCONFDIR=$(OMI_ROOT)//opt/omi-1.0.8/etc
CXXLIBS = -L$(LIBDIR) -lmicxx

__OBJECTS = $(SOURCES:.c=.o)
OBJECTS = $(__OBJECTS:.cpp=.o)
INCLUDES += -I$(INCLUDEDIR)

CC=gcc
CXX=g++

ifndef DEBUG
  CFLAGS=-g -fPIC -Wall -fvisibility=hidden -fno-strict-aliasing -D_GNU_SOURCE -D_XOPEN_SOURCE=600 -D_BSD_SOURCE
  CXXFLAGS=-g -fPIC -Wall -fvisibility=hidden -fno-strict-aliasing -D_GNU_SOURCE -D_XOPEN_SOURCE=600 -D_BSD_SOURCE
else
  CFLAGS=cflags: unknown option: --optim
  CXXFLAGS=cxxflags: unknown option: --optim
endif

CSHLIBFLAGS=-shared -Wl,-rpath=/opt/omi-1.0.8/lib
CXXSHLIBFLAGS=-shared -Wl,-rpath=/opt/omi-1.0.8/lib
LIBRARY = lib$(PROVIDER).so

