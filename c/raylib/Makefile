
.DEFAULT_GOAL := none

none:
	echo "please write the executable filename"

# This is to make the raylib files, by convention they must start with raylib_ in order to trigger this make recipie
raylib_%: clean
	tcc $@.c -o $@ -l raylib


# clean will remove all executables
clean:
	find . -type f -executable -delete
