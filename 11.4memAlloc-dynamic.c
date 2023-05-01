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

/*
    Note:
        - data from an array will usually be fetched from a database or user input.

        - malloc function will return a pointer
*/

/*
    This code is an example of dynamic memory allocation in C. It allows the user to enter the size of an integer array, dynamically allocates the memory needed for that array using the `malloc()` function, initializes the array with user input, prints the array, and then frees the allocated memory using the `free()` function.
        Here's what the code is doing step-by-step:

        1. The first two lines of the code include two standard C libraries, `stdio.h` and `stdlib.h`, which provide functions for input/output and dynamic memory allocation respectively.

        2. The `main()` function is where the program starts executing.

        3. The program prompts the user to enter the size of the array using `printf()` and `scanf()`. The value entered by the user is stored in the variable `size`.

        4. The `malloc()` function is then used to dynamically allocate memory for the array. The size of the memory block is determined by multiplying the size of each integer element by the number of elements needed (i.e., `size`). The `(int*)` cast is used to convert the return value of `malloc()` to a pointer to an integer, which can then be assigned to the `arr` variable.

        5. The program checks if the memory allocation was successful by checking if `arr` is `NULL`. If it is, it means that the memory allocation failed and the program prints an error message using `printf()`, returns `1` to indicate an error, and terminates.

        6. If memory allocation was successful, the program initializes the array with user input using a `for` loop. The loop runs `size` number of times and prompts the user to enter an integer for each element of the array using `printf()` and `scanf()`. The value entered by the user is stored in the array at the corresponding index.

        7. The program then prints the elements of the array using another `for` loop that runs `size` number of times. Each element of the array is printed using `printf()`.

        8. Finally, the program frees the dynamically allocated memory using the `free()` function. This is important to avoid memory leaks, where memory is allocated but not freed, causing the program to use up all available memory over time.

        9. The `return` statement at the end of the `main()` function indicates that the program has executed successfully and returns a value of `0` to the operating system.

*/

/*
    Dynamic memory allocation is often used in programming scenarios where the size of the data that needs to be stored in memory is not known at compile time. This can include situations where the amount of data to be stored may change during program execution, or where the size of the data is too large to be stored on the stack.

        Some common examples of when dynamic memory allocation may be used include:

        - Reading data from a file of unknown size into memory
        - Allocating memory for a data structure, such as a linked list or a tree, where the size of the structure is not known until runtime
        - Storing data in a buffer or array that may grow or shrink in size during program execution, such as in a dynamic string implementation
        - Allocating memory for a program's heap, which is used for dynamic allocation of objects and data during runtime.
*/
