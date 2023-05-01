/*
    Dynamic memory allocation: In this type of allocation, memory is allocated and deallocated during runtime as needed by the program. Functions such as "malloc", "calloc", and "realloc" are used to dynamically allocate memory. The allocated memory remains allocated until explicitly deallocated by the program using the "free" function.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array
    arr = (int *)malloc(size * sizeof(int));
    printf("%d", arr);

    // Check if memory allocation was successful
    if (arr == NULL)
    {
        printf("Error: Memory allocation failed!");
        return 1;
    }

    // Initialize the array with user input
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the array
    printf("The elements of the array are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}

/*
    In this example, the user is asked to enter the size of an array. The program then dynamically allocates memory for the array using the malloc function. The sizeof operator is used to calculate the amount of memory required for the array based on the size of the int data type.

    The program then initializes the array with user input and prints the elements of the array. Finally, the allocated memory is freed using the free function to avoid memory leaks.
*/
