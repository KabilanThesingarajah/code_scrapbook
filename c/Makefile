# -*- MakeFile -*-

#"what you want to make": "ingredients- other recipies that are listed in this MakeFile"
#	action
#


.DEFAULT_GOAL := none

none: 
	echo "must specify a file"



# This is to make most of the c files, it is the exact same process for each of the little commands, so we use a matching pattern
%:
	tcc $@.c -o $@

# This is to make the raylib files, by convention they must start with raylib_ in order to trigger this make recipie
raylib_%: clean
	tcc $@.c -o $@ -l raylib


# clean will remove all executables
clean:
	find . -type f -executable -delete
