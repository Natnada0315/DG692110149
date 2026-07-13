#include <stdio.h>
int main()
{
    int hours, minutes, seconds;

    printf("Input seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = seconds % 60;

    printf("Time : %d : %d : %d :\n", hours, minutes, seconds);

    return 0;
}