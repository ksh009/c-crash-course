/*
    Automatic memory allocation: In this type of allocation, memory is allocated at runtime, when a function is called, and is automatically deallocated when the function returns. Variables declared within a function without the "static" keyword are automatically allocated
*/

#include <stdio.h>

void add_numbers(int x, int y)
{
    int sum = x + y; // sum is automatically allocated
    printf("The sum of %d and %d is %d\n", x, y, sum);
    // sum is automatically deallocated when the function returns
}

int main()
{
    int a = 5;  // a is automatically allocated
    int b = 10; // b is automatically allocated
    add_numbers(a, b);
    return 0;
}

/*
    In this example, the add_numbers function is called with two arguments x and y, which are automatically allocated when the function is called. Within the function, the variable sum is also automatically allocated to store the sum of x and y. When the function returns, both x and y and sum are automatically deallocated.

    Similarly, within the main function, the variables a and b are automatically allocated when the program is run, and are automatically deallocated when the program exits
*/
