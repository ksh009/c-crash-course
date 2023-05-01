#include <stdio.h>

/*

    Append Content To a File
If you want to add content to a file without deleting the old content, you can use the a mode.

The a mode appends content at the end of the file:
*/

int main()
{
    FILE *fptr;

    // Open a file in append mode
    fptr = fopen("filename.txt", "a");

    // Append some text to the file
    fprintf(fptr, "\nHi everybody!");

    // Close the file
    fclose(fptr);
}
