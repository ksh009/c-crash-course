#include <stdio.h>

/*
    C Enums
        An enum is a special type that represents a group of constants (unchangeable values).

        To create an enum, use the enum keyword, followed by the name of the enum, and separate the enum items with a comma:
*/

/*
    Note that the last item does not need a comma.

        It is not required to use uppercase, but often considered as good practice.

        Enum is short for "enumerations", which means "specifically listed".
*/

enum Level
{
    LOW,
    MEDIUM,
    HIGH
};

int main()
{
    /*
        To access the enum, you must create a variable of it.

        Inside the main() method, specify the enum keyword, followed by the name of the enum (Level) and then the name of the enum variable (myVar in this example):
    */
    enum Level myVar;

    /*
        Now that you have created an enum variable (myVar), you can assign a value to it.

        The assigned value must be one of the items inside the enum (LOW, MEDIUM or HIGH):

        By default, the first item (LOW) has the value 0, the second (MEDIUM) has the value 1, etc.

        If you now try to print myVar, it will output 1, which represents MEDIUM:
    */
    myVar = HIGH;

    // Print the enum variable
    printf("%d", myVar);

    return 0;
}