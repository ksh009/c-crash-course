#include <stdio.h>

// Create a structure called myStructure
struct myStructure
{
    int myNum;
    char myLetter;
};

int main()
{
    // Create a structure variable of myStructure called s1
    struct myStructure s1;
    // Additional structu from main struct
    struct myStructure s2;

    // Assign values to members of s1
    s1.myNum = 13;
    s1.myLetter = 'B';

    // Assign values to members of s2
    s2.myNum = 9;
    s2.myLetter = 'q';

    // Print values
    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);

    // Print values of s2
    printf("My number: %d\n", s2.myNum);
    printf("My letter: %c\n", s2.myLetter);

    return 0;
}