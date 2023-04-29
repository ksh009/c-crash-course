#include <stdio.h>

int main()
{
    printf("Hello World!\n");

    int x = 50;
    int y;  // declaration
    y = 10; // initialization

    // 2dn arg in print will replace %s
    printf("%s World!!\n", "HeLLo");

    // 2dn arg in print will replace %d
    printf("The value of x is %d\n", x);

    // 2nd and 3rd arg will replace %d in the order it was written
    printf("X: %d, Y: %d\n", x, y);

    // Getting user input
    /*
        & char is to indicate the change of a var (aka address-of-operator)
        - gives a pointer
            - EXCEPTION: When woring with arrays then "&" not required.
    */
    printf("Give me a radius: ");
    int radius;
    scanf("%d", &radius);

    printf("You chose the value %d\n", radius);

    return 0;
}

/*
    %s, %d - Known as coversion chars (These are of the common conversion chars)
    - s = strings
    - d = integer data
*/