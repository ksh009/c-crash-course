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

    // Legal identifiers
    /*
        Starting var like this
        - int 5cats will result in a compilation error

        C is case sensitive

        Convention
            - camelCase
    */

    // Below vars do not refer to same thing
    int cats;
    int CATS;
    int caTs;

    // Implicit type conversion
    /*
        Chage the type of values to meet expectations

        zero stores decimal val in int declaration type
        // Output below will be 0. Decimal value not recognized
    */

    int zero = .99999999;
    printf("zero is %d\n", zero);

    // Type casting (Tell the compiler that you want to do a cast)
    /*
        Implicit will do it for you automatically

        NOTE: when divding an integer with an integer in c, you are only capable of getting an integer as an output

        "%lf" for double
    */
    int slices = 17;
    int people = 2;

    // Result for this will actually be 8.000000
    /*
        Result will be stored as a double but "inputs will not be read as doubles"
        (double) will cast slices to 17.0
            - (double) known as a "uniry" operator
                - This works too => (double)slices
    */
    double slicesPerPerson = (double)(slices) / people; // Expectation is to get 8.5 slices per person
    printf("%lf\n", slicesPerPerson);

    // More examples (Evaluated in BODMAS format)
    /*
        By default numbers will be integers
        So, 25 / 2 === 12 not 12.5

        2nd example results in same logic as example above where integers are specified
    */
    double test1 = 25 / 2 * 2;   // 24.0
    double test2 = 25 / 2 * 2.0; // 24.0 (Will not work just because you have a double) Multiplication is after division in BODMAS

    // Fix
    double test3 = 25.0 / 2 * 2;         // First in BODMAS results in double. Hence double result
    double test4 = 25 / (double)2 * 2.0; // Can have double on 25 or 2

    printf("%lf\n", test1);
    printf("%lf\n", test2);
    printf("%lf\n", test3);
    printf("%lf\n", test4);

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