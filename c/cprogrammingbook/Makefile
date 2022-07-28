.DEFAULT_GOAL := none

Makefile:
	echo "making the file(s)!"

%: clean
	tcc $@.c -o $@

# clean will remove all executables
clean:
	find . -type f -executable -delete
