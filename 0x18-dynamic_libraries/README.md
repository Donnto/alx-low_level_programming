# C - Dynamic libraries
In this project, learned about using dynamic libraries in C, including how to create them and how to use them with $LD_LIBRARY_PATH, nm, ldd, and ldconfig.

# Tests ✔️
tests: Folder of test files.

# Tasks 📃

• 0. A library is not a luxury but one of the necessities of life

    ° libholberton.so: C dynamic library containing all the functions listed below:

        •int _put7char(char c);

        • int _islower(int c);

        • int _isalpha(int c);

        • int _abs(int n);

        • int _isupper(int c);

        • int _isdigit(int c);

        • int _strlen(char *s);

        • void _puts(char *s);

        • char *_strcpy(char *dest, char *src);

        • int _atoi(char *s);

        • char *_strcat(char *dest, char *src);

        • char *_strncat(char *dest, char *src, int n);

        • char *_strncpy(char *dest, char *src, int n);

        • int _strcmp(char *s1, char *s2);

        • char *_memset(char *s, char b, unsigned int n);

        • char *_memcpy(char *dest, char *src, unsigned int n);

        • char *_strchr(char *s, char c);

        • unsigned int _strspn(char *s, char *accept);

        • char *_strpbrk(char *s, char *accept);

        • char *_strstr(char *haystack, char *needle);

    ° holberton.h: Header file containing the prototypes of all functions included in libholberton.so.

• 1. Without libraries what have we? We have no past and no future

    ° 1-create_dynamic_lib.sh: Bash script that creates a dynamic library called liball.so from all the .c files in the current directory.

• 2. Let's call C functions from Python

    ° 100-operations.so: C dynamic library containing basic C mathematical operation functions that can be called from Python.
    ° Includes:
        • int add(int a, int b);
        • int sub(int a, int b);
        • int mul(int a, int b);
        • int div(int a, int b);
        • int mod(int a, int b);
