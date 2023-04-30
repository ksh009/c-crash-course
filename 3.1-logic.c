#include <stdio.h>
#include <stdbool.h>

/*
    Includes
        - if statements and variations
        - Switch statements
        - ternary operator
*/
int main()
{
    int age = 17;
    double money = 30000;

    // Not operator
    if (!(age > 17))
    {
        printf("this is adult\n");
    }
    else
    {
        printf("This is not adult");
    }

    // && operator
    if (age > 17 && money > 25000)
    {
        printf("true\n");
    }
    else
    {
        printf("false");
    }

    // && operator
    if (age > 17 || money > 25000)
    {
        printf("true\n");
    }
    else
    {
        printf("false");
    }

    // if else if else
    if (age > 17 || money > 25000)
    {
        printf("true 1\n");
    }
    else if (age < 17 && money > 25000)
    {
        printf("true 2\n");
    }
    else
    {
        printf("No match\n");
    }

    // Single line if statements
    if (age < 150)
        printf("Some return text\n");

    // Switch statement
    /*
        Break is like the return statement
    */
    int menuChoice = 2;

    switch (menuChoice)
    {
    case 0:
        /* code */
        printf("Case 0\n");
        break;
    case 1:
        /* code */
        printf("Case 1\n");
        break;
    case 2: // This case
        /* code */
        /* more code */
        printf("Case 2\n");
        break;
    case 3:
        /* code */
        printf("Case 3\n");
        break;
    default:
        /* code */
        printf("Default\n");
        break;
    }

    // Ternary
    double balance = -5000;

    balance > 0 ? printf("You have money\n") : printf("No Money\n");
    return 0;
}
