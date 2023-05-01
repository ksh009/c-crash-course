#include <stdio.h>
#include <string.h>

/*
    Modify Values
        If you want to change/modify a value, you can use the dot syntax (.).

        And to modify a string value, the strcpy() function is useful again:
*/

struct myStructure
{
    int myNum;
    char myLetter;
    char myString[30];
};

int main()
{
    // Create a structure variable and assign values to it
    struct myStructure s1 = {13, 'B', "before"};

    // Print values before
    printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);

    // Modify values
    s1.myNum = 30;
    s1.myLetter = 'C';
    strcpy(s1.myString, "Something after");

    // Print values after
    printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

    return 0;
}