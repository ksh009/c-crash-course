#include <stdio.h>

/*
    Enum in a Switch Statement
    Enums are often used in switch statements to check for corresponding values:
*/

enum Level
{
    LOW = 1,
    MEDIUM,
    HIGH
};

int main()
{
    enum Level myVar = MEDIUM;

    switch (myVar)
    {
    case 1:
        printf("Low Level");
        break;
    case 2:
        printf("Medium level");
        break;
    case 3:
        printf("High level");
        break;
    }
    return 0;
}

/*
    Why And When To Use Enums?
Enums are used to give names to constants, which makes the code easier to read and maintain.

Use enums when you have values that you know aren't going to change, like month days, days, colors, deck of cards, etc.
*/