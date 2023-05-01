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

/*
    Modifying values are especially useful when you copy structure values:

    // Create a structure variable and assign values to it
    struct myStructure s1 = {13, 'B', "Some text"};

    // Create another structure variable
    struct myStructure s2;

    // Copy s1 values to s2
    s2 = s1;

    // Change s2 values
    s2.myNum = 30;
    s2.myLetter = 'C';
    strcpy(s2.myString, "Something else");

    // Print values
    printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);
    printf("%d %c %s\n", s2.myNum, s2.myLetter, s2.myString);
*/