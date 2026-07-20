#include <stdio.h>
int main()
{
    int day;
    printf("Enter Your number of the day : ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday \n");
        break;
    case 2:
        printf("Tuesday \n");
        break;
    case 3:
        printf("Wesnesday \n");
        break;
    case 4:
        printf("Thursday \n");
        break;
    case 5:
        printf("Friday \n");
        break;
    case 6:
        printf("Saturday (Weekend!) \n");
        break;
    case 7:
        printf("Sunday (Weekend!) \n");
        break;
    case 8:
        printf("Invalid input!!!!! \n");
        break;
    }
    return 0;
}