/*
    Static memory allocation: In this type of allocation, memory is allocated at compile-time and remains allocated for the entire duration of the program. Variables declared with the "static" keyword or outside of any function are statically allocated.
*/
#include <stdio.h>

int main()
{
    int arr[5]; // static memory allocation
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }

    printf("\nYou entered: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
    In this example, we declare an integer array arr with a size of 5, which is allocated statically at compile time. We then use a for loop to read in 5 integers from the user and store them in the array. Finally, we use another for loop to print out the contents of the array. Since the memory for the array is allocated statically, it will remain allocated throughout the entire lifetime of the program.
*/
