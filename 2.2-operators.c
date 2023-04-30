#include <stdio.h>

int main()
{
    // Example of expression
    /*
        Operators are used to create expressions
        Operators work on operands (e.g 5 below)
        - plus below has 2 operands, meaning it is binary

        Types of oeprators
            - 1. unary
                - Works on 1 operand
                -
            - 2. binary
            - 3. ternary
    */
    int test_x = 5 + 5;

    // Plus and Minus (unary) +, - (is integer positive or negative (NOT aritmetic))
    // Arithmetic (binary) +, -, /, *, %
    // // Modulus
    /*
        First % to specify conversion char type
        2nd escapes and prints modulus
    */
    printf("Modulus operator: \n");
    int c = 10 % 3;
    printf("10 %% 3 = %d\n", c);

    // Increment and Decrement (unary) ++, --
    printf("Unary minus: \n");
    int a = 5;

    int b = -a;

    printf("b = %d\n", b);
    printf("a = %d\n", a); // a does not change

    printf("post increment:\n");
    a = 5;
    b = 5;
    b = a++;
    printf("b = %d\n", b); // b gets assigned to first
    printf("a = %d\n", a); // Then a is incremented

    printf("pre increment:\n");
    b = 5;
    a = 5;
    b = ++a;
    printf("b = %d\n", b); // b gets assigned to first
    printf("a = %d\n", a); // Then a is incremented

    // Assignment Operators (binary) =, +=, -=, /=, *=, %=
    printf("Assignment Operators:\n");
    a = 5;
    b = 5;
    b += a;
    printf("b += a = %d\n", b); // 5 + 5
    a *= 30;
    printf("b *= 30 = %d\n", a); // 5 * 30
    a %= 140;
    printf("a %%= 140 = %d\n", a); // 150 % 140

    // Comparison Operators (binary) ==, !=, <, >, <=, >=
    // Logical Operators (binary) &&, ||, !
    // Conditional operator (ternary) ? :
    // Precedence and Associativity
    /*
        BODMAS
        - Force precedence by using () "Brackets first in BODMAS"
    */
    printf("\nforce precedence with ()\n");
    int x = 2 * (3 + 3);
    int y = (2 * 3) + 3;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
}