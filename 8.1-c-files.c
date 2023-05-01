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

// Extra notes
/*
    Closing the file
        Did you notice the fclose() function in our example above?

        This will close the file when we are done with it.

        It is considered as good practice, because it makes sure that:

        Changes are saved properly
        Other programs can use the file (if you want)
        Clean up unnecessary memory space
*/