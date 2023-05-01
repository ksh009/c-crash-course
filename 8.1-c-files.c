#include <stdio.h>

int main()
{
    FILE *fptr;

    /*
        Create a file in the same directory
    */
    // Create a file on your computer (filename.txt)
    // fptr = fopen("filename.txt", "w");

    // Close the file
    // fclose(fptr);

    /*
        Create a file in a specific directory
    */
    fptr = fopen("/Users/user_name/Desktop/example.txt", "w");
    fclose(fptr);

    return 0;
}