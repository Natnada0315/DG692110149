#include <stdio.h>
int main()
{
    int count = 1;
    int cols = 5;
    int row = 3;
    for (int i = 0; i <= row - 1; i++)
    {
        printf("+---+---+---+---+---+\n");

        for (int j = 0; j <= cols - 1; j++)
        {
            printf("|%2d ", count++);
        }
        printf("|\n");
    }
    printf("+---+---+---+---+---+\n");

    return 0;
}