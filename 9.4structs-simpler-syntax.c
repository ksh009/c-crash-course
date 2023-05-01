#include <stdio.h>
// #include <string.h>

/*
    Simpler Syntax
    You can also assign values to members of a structure variable at declaration time, in a single line.

    Just insert the values in a comma-separated list inside curly braces {}. Note that you don't have to use the strcpy() function for string values with this technique:
*/

// Create a structure
struct myStructure
{
    int myNum;
    char myLetter;
    char myString[30];
};

int main()
{
    // Create a structure variable and assign values to it
    struct myStructure s1 = {13, 'B', "Some text"};

    // Print values
    printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

    return 0;
}

/*
    Note: The order of the inserted values must match the order of the variable types declared in the structure (13 for int, 'B' for char, etc).
*/

/*
    Copy Structures
        You can also assign one structure to another.

        In the following example, the values of s1 are copied to s2:

            struct myStructure s1 = {13, 'B', "Some text"};
            struct myStructure s2;

            s2 = s1;
*/