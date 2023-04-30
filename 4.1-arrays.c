#include <stdio.h>

int main()
{
    // Example 1
    int ages[5] = {23, 28, 36, 41, 19};

    for (int i = 0; i < 5; i++)
    {
        printf("Age at index %d is %d\n", i, ages[i]);
    }

    // Example 2
    char message[] = "Hello, world!";

    for (int i = 0; message[i] != '\0'; i++)
    {
        printf("%c", message[i]);
    }

    // Example 3 mulit-dimensional
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Example 2 multi-dimesional
    int image[2][3][4] = {
        {{255, 0, 0, 255},
         {0, 255, 0, 255},
         {0, 0, 255, 255}},
        {{255, 255, 0, 255},
         {255, 0, 255, 255},
         {0, 255, 255, 255}}};

    for (int i = 0; i < 2; i++)
    {
        printf("Image %d:\n", i);
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("%d ", image[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
