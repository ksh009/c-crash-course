#include <stdio.h>
// "" will search in same dir
#include "libraries.h"

int main()
{
    int n = 5;
    printf("%d! = %d\n", n, factorial(n));
    return 0;
}

// Link main program to library
// gcc -o myprogram myprogram.c -L. -lmylibrary
// gcc -o myprogram myprogram.c -L. -lmylibrary
