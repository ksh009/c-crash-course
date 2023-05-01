#include <stdio.h>

int main()
{
    int arr[5]; // static memory allocation
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }

    printf("\nYou entered: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
