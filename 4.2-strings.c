// Reserve a char for null terminator. Indicate end of string
// Do not overwrite null terminator

#include <stdio.h>

int main()
{
    // Printing a string
    char str[] = "Hello, world!";
    printf("%s", str);

    // Printing a string (Limit)
    char str[20]; // '\0'
    printf("19%s", str);

    // Getting input from user as a string:
    char str1[100];
    printf("Enter a string: ");
    scanf("%s", str1);
    printf("You entered: %s", str1);

    // Copy a string
    char str1[] = "Hello, world!";
    char str2[100];
    strcpy(str2, str1);
    printf("%s", str2);

    // Concatenating two strings:
    char str1[] = "Hello, ";
    char str2[] = "world!";
    char str3[100];
    strcpy(str3, str1);
    strcat(str3, str2);
    printf("%s", str3);

    // Comparing two strings:
    char str1[] = "Hello, world!";
    char str2[] = "Hello, C!";
    int result = strcmp(str1, str2);
    if (result == 0)
    {
        printf("The strings are equal");
    }
    else if (result < 0)
    {
        printf("The first string is smaller");
    }
    else
    {
        printf("The second string is smaller");
    }
    return 0;
}
