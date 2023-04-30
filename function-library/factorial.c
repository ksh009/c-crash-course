#include "libraries.h"
int factorial(int n)
{
    int result = 1;
    while (n > 1)
    {
        result *= n--;
    }
    return result;
}

/*
    1. Compile
    gcc -c factorial.c

    2. Link output file to library file
    ar rcs libmylibrary.a factorial.o
*/
