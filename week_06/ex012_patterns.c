#include <stdio.h>
int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int row = 1; row <= 4; row++)
    {
        for (int col = 1; col <= 4; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    int n = 5;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int row = n - 1; row >= 1; row--)
    {
        for (int col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}