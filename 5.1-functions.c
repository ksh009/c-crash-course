#include <stdio.h>

/*
    This function prints the message "Hello, World!" to the console. In C, functions must be declared with a return type. In this case, the function returns void, which means it does not return a value.
*/

void hello_world()
{
    printf("Hello, World!\n");
}

/*
    This function takes two integer parameters, adds them together, and returns the result. Note that the return type is int, indicating that the function returns an integer value.
*/

int add(int a, int b)
{
    return a + b;
}

/*
    This function calculates the factorial of an integer. The factorial of n is defined as n! = n * (n-1) * (n-2) * ... * 1. Note that this function uses recursion, which is a technique where a function calls itself.
*/

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

/* Addtional notes

    - C does not have built-in support for dynamic memory allocation and garbage collection, so memory management is very important. Make sure to properly allocate and deallocate memory to avoid memory leaks and other issues.

    - C uses pointers extensively, which can be confusing and error-prone for beginners. Make sure to understand how pointers work and how to use them safely.

    - C does not have built-in support for many high-level programming constructs like classes, objects, and exceptions, so you may need to implement these yourself or use a library.

    - C is a low-level language, which means that it is often more difficult and verbose to write than high-level languages like JavaScript. Be prepared to write more code and spend more time debugging your programs.


*/
