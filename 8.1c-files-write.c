#include <stdio.h>

int main()
{
    FILE *fptr;

    // Open a file in writing mode
    fptr = fopen("filename.txt", "w");

    // Write some text to the file
    fprintf(fptr, "Some text new");

    // Close the file
    fclose(fptr);
}
