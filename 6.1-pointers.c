#include <stdio.h>

/*
    Memory Address
When a variable is created in C, a memory address is assigned to the variable.

The memory address is the location of where the variable is stored on the computer.

When we assign a value to the variable, it is stored in this memory address.

To access it, use the reference operator (&), and the result represents where the variable is stored:

A pointer is a variable that stores the memory address of another variable as its value.

A pointer variable points to a data type (like int) of the same type, and is created with the * operator.

The address of the variable you are working with is assigned to the pointer:



*/

int main()
{
    int myAge = 43;    // An int variable
    int *ptr = &myAge; // A pointer variable, with the name ptr, that stores the address of myAge

    // Output the value of myAge (43)
    printf("%d\n", myAge);

    // Output the memory address of myAge (0x7ffe5367e044)
    printf("%p\n", &myAge);

    // Output the memory address of myAge with the pointer (0x7ffe5367e044)
    printf("%p\n", ptr);
}

/*
    Note: The memory address is in hexadecimal form (0x..). You will probably not get the same result in your program, as this depends on where the variable is stored on your computer.

You should also note that &myAge is often called a "pointer". A pointer basically stores the memory address of a variable as its value. To print pointer values, we use the %p format specifier.

You will learn much more about pointers in the next chapter.

Why is it useful to know the memory address?
Pointers are important in C, because they allow us to manipulate the data in the computer's memory - this can reduce the code and improve the performance.

Pointers are one of the things that make C stand out from other programming languages, like Python and Java.

*/
