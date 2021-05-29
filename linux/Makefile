MINGW_PFX = i686-w64-mingw32
# MINGW_PFX = x86_64-w64-mingw32

.DUMMY: all

all: rFactor2_wrapper.exe _rFactor2.exe

rFactor2_wrapper.exe: rFactor2_wrapper.c
	$(MINGW_PFX)-gcc $< -o $@ -O0 -msse2 # -shared-libgcc
	# $(MINGW_PFX)-strip --strip-unneeded $@

_rFactor2.exe: rFactor2_exe.c
	$(MINGW_PFX)-gcc $< -o $@ -O0 -msse2 # -shared-libgcc
	# $(MINGW_PFX)-strip --strip-unneeded $@

clean:
	@rm -v rFactor2_wrapper.exe _rFactor2.exe
