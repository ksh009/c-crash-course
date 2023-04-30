#include <stdio.h>

/*
    Three types of loops
        - 1. For
        - 2. While
        - 3. Do while
*/
int main()
{
    // Simple For loop
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("The value of i is: %d\n", i);
    }

    // For loop array
    int ages[] = {21, 32, 45, 27, 18};
    int a;

    for (a = 0; a < 5; a++)
    {
        printf("Age %d\n", ages[a]);
    }

    // For loop dynamic array length
    int ages_1[] = {20, 30, 40, 50, 60};
    int array_length = sizeof(ages_1) / sizeof(ages_1[0]);
    for (int d = 0; d < array_length; d++)
    {
        printf("%d\n", ages_1[d]);
    }

    // Simple While loop
    int j = 0;
    while (j < 5)
    {
        printf("The value of j is: %d\n", j);
        j++;
    }

    // While loop array
    int ages[] = {21, 32, 45, 27, 18};
    int b = 0;

    while (b < 5)
    {
        printf("Age %d\n", ages[b]);
        b++;
    }

    // While loop dynamic array len
    int ages_2[] = {20, 30, 40, 50, 60};
    int array_length = sizeof(ages_2) / sizeof(ages_2[0]);
    int e = 0;
    while (e < array_length)
    {
        printf("%d\n", ages_2[e]);
        e++;
    }

    //  Simple Do while loop
    int k = 0;
    do
    {
        printf("The value of k is: %d\n", k);
        k++;
    } while (k < 5);

    // Do while loop array
    int ages[] = {21, 32, 45, 27, 18};
    int c = 0;

    do
    {
        printf("Age %d\n", ages[c]);
        c++;
    } while (c < 5);

    // Do while dynamic len
    int ages_3[] = {20, 30, 40, 50, 60};
    int array_length = sizeof(ages_3) / sizeof(ages_3[0]);
    int f = 0;
    do
    {
        printf("%d\n", ages_3[f]);
        f++;
    } while (f < array_length);

    // Nested for loop
    int f, g;

    for (f = 1; f <= 10; f++)
    {
        for (g = 1; g <= 10; g++)
        {
            printf("%d x %d = %d\n", f, g, f * g);
        }
    }

    return 0;
}