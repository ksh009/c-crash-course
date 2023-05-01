/*
    Dynamic memory allocation
        - Very closely tied to variable scope

    - Variables declared inside a specific scope will
*/

#include <stdio.h>

void fun()
{
    /*
        When a static var is created, we create a variable that exists for the lifetime of the program
        Scope stays the same
        Only gets initialized 1 time to zero

        In C, there are three types of memory allocation:

        Static memory allocation: In this type of allocation, memory is allocated at compile-time and remains allocated for the entire duration of the program. Variables declared with the "static" keyword or outside of any function are statically allocated.

        Automatic memory allocation: In this type of allocation, memory is allocated at runtime, when a function is called, and is automatically deallocated when the function returns. Variables declared within a function without the "static" keyword are automatically allocated.

        Dynamic memory allocation: In this type of allocation, memory is allocated and deallocated during runtime as needed by the program. Functions such as "malloc", "calloc", and "realloc" are used to dynamically allocate memory. The allocated memory remains allocated until explicitly deallocated by the program using the "free" function.
    */
    int static x = 0;
    x++;
    printf("%d\n", x);
}

int main()
{
    fun();
    fun();
    fun();

    return 0;
}