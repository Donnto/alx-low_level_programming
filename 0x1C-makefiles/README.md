# C - Makefiles
In this project, I practiced writing Makefiles.

# Tests ✔️
tests: Folder of test files.

# Helper Files 🙌
school.c: C function that displays a seahorse in text. Used for Makefile practice purposes throughout project. Provided by Alx School.

main.c: Main C function that runs the function defined in school.c. Provided by Alx School.

# Header File 📁
m.h: Header file defining the function prototype used in school.c. Provided by Alx School.

# Tasks 📃

• 0. make -f 0-Makefile

    ° 0-Makefile: Makefile that creates an executable school based on school.c and main.c. Includes:
    ° Rule all that builds the executable.

• 1. make -f 1-Makefile

    ° 1-Makefile: Makefile that creates an executable school based on school.c and main.c. Builds on 0-Makefile with:

    ° Variable CC that defines the compiler to be used. 
    
    ° Variable SRC that defines the .c files to compile.

    ° The all rule only recompiles updated source files.

• 2. make -f 2-Makefile

    ° 2-Makefile: Makefile that creates an executable school based on school.c and main.c. Builds on 1-Makefile with:

    ° Variable OBJ that defines the .o files to compile.

    ° Variable NAME that defines the name of the executable.

• 3. make -f 3-Makefile

    ° 3-Makefile: Makefile that creates an executable school based on school.c and main.c. Builds on 2-Makefile with:

    ° Rule clean that deletes all Emacs/Vim temporary files as well as the executable.

    ° Rule oclean that deletes the object files.

    ° Rule fclean that deltes all of the temporary files, executable, and object files.

    ° Rule re that forces recompilation of all source files.

    ° Variable RM that defines the command to delete files.

• 4. A complete Makefile

    ° 4-Makefile: Makefile that creates an executable school based on school.c and main.c. Builds on 3-Makefile with:

    ° Variable CFLAGS that defines the compiler flags -Wall -Werror -Wextra -pedantic.

• 5. Island Perimeter

    ° 5-island_perimeter.py: Python function that returns the perimeter of an island defined in a grid.

    ° Prototype: def island_perimeter(grid):

    ° The parameter grid is a list of a list of integers.

    ° Water is represented by 0.

    ° Land is represented by 1.

    ° Each element of the lists represents a cell square of side length 1.

    ° Grid cells are connected horizontally/verticaly (not diagonally).

    ° The grid is rectangular, with a width and height not exceeding 100.

    ° The grid is completely surrounded by water, and there is either exactly one island or nothing.

    ° The island does not contain lakes (water inside disconnected from surrounding land).

• 6. make -f 100-Makefile

    ° 100-Makefile: Makefile that creates an executable school based on school.c and main.c. Builds on 4-Makefile with:

    ° Does not define the variable RM.

    ° Never uses the string $(CFLAGS).

    ° Does not compile if the header m.h is missing.

    ° Works even if there are existing files of the same name as any of the Makefile rules in the current directory.
