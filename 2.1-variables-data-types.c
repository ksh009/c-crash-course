#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Numbers
    int a = 10;
    /*
        %lu - unsigned long
            - Only positive
        // Output for "b" below is 8 bytes (1 byte === 8 bits) (8*8=64)
        // Output for "c" below is 4 bytes (1 byte === 8 bits) (4*8=32)

        Use float when really constrained in terms of memory size
        - Note that c can run on different devices
            - If you are building for a device that has small memory this
                - should be taken into account
    */
    double b = 10.5; // 64 bit number (More bits == more precision)
    printf("%lu\n", sizeof(b));

    float c = 10.5; // 32 bit number
    printf("%lu\n", sizeof(c));

    // Strings
    /*
        char will just store one char
    */

    char d = 'a';
    char e[/*Specify length of string here (null termi included)*/] = "char array";

    // Booleans
    /*
        To use need to #include <stdbool.h>
    */
    bool f = false; // or true

    return 0;
}

/*
    C is statically typed
        - Must specify what type vars is when declared
        - type declaration will only store that type in declared var
        - Benefits:
            - More error found in compilation

    - JS for example is Dynamically typed
        - Do not need to specify type of var
        - different data types can be assigned to declared var
        - Can run into type errors here

*/