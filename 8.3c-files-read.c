#include <stdio.h>

int main()
{
    FILE *fptr;

    // Open a file in read mode
    fptr = fopen("filenames.txt", "r");

    /*
        Good Practice
            If you try to open a file for reading that does not exist, the fopen() function will return NULL.

            Tip: As a good practice, we can use an if statement to test for NULL, and print some text instead (when the file does not exist):
    */

    // Print some text if the file does not exist
    if (fptr == NULL)
    {
        printf("Not able to open the file.");
    }

    /*
        This will make the filename.txt opened for reading.

            It requires a little bit of work to read a file in C. Hang in there! We will guide you step-by-step.

            Next, we need to create a string that should be big enough to store the content of the file.

            For example, let's create a string that can store up to 100 characters:
    */

    // Store the content of the file
    char myString[100];

    /*
        In order to read the content of filename.txt, we can use the fgets() function.

            The fgets() function takes three parameters:
                The first parameter specifies where to store the file content, which will be in the myString array we just created.
                The second parameter specifies the maximum size of data to read, which should match the size of myString (100).
                The third parameter requires a file pointer that is used to read the file (fptr in our example).
    */
    fgets(myString, 100, fptr);

    /*
        Now, we can print the string, which will output the content of the file:
    */

    // Print the file content
    printf("%s", myString); // Hello World!

    /*
        Note: The fgets function only reads the first line of the file. If you remember, there were two lines of text in filename.txt.

            To read every line of the file, you can use a while loop:
    */

    // Read the content and print it
    while (fgets(myString, 100, fptr))
    {
        printf("%s", myString);
    }

    // Close the file
    fclose(fptr);
}
