.PHONY: check
.PHONY: tests

__ROOT=/home/test/omi-1.0.8
export OUTPUTDIR=/home/test/omi-1.0.8/output
export SYSCONFDIR=/opt/omi-1.0.8/etc
export DATADIR=/opt/omi-1.0.8/share
export ROOT=/home/test/omi-1.0.8

all:
	@echo '========================= Performing build'
	( cd $(__ROOT); $(MAKE) -f build.mak )

tests:
	@echo '========================= Performing unit tests'
	( cd $(__ROOT); $(MAKE) -f build.mak tests )

check:
	@echo '========================= Performing check'
	( cd $(__ROOT); $(MAKE) -f build.mak check )

%:
	( cd $(__ROOT); $(MAKE) -f build.mak $(MAKECMDGOALS) )
