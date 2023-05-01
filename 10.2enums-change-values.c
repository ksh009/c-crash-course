#include <stdio.h>

/*
    Change Values
        As you know, the first item of an enum has the value 0. The second has the value 1, and so on.

        To make more sense of the values, you can easily change them:
*/

enum Level
{
    LOW = 25,
    MEDIUM = 50,
    HIGH = 75
};

int main()
{
    enum Level myVar;
    myVar = HIGH;

    // Print the enum variable
    printf("%d", myVar);

    return 0;
}