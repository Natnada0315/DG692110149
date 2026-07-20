#include <stdio.h>
int main()
{
    int grade;

    printf("Enter Your score : ");
    scanf("%d", &grade);

    printf("Your score : %d = ", grade);

    if (grade >= 80)
    {
        printf("Grade A (4.0) - Pass");
    }
    else if (grade >= 75 && grade <= 79)
    {
        printf("Grade B+ (3.5) - Fail");
    }
    else if (grade >= 70 && grade <= 74)
    {
        printf("Grade B (3.0) - Fail");
    }
    else if (grade >= 65 && grade <= 69)
    {
        printf("Grade C+ (2.5) - Pass");
    }
    else if (grade >= 60 && grade <= 64)
    {
        printf("Grade C (2.0) - Pass");
    }
    else if (grade >= 55 && grade <= 59)
    {
        printf("Grade D+ (1.5) - Pass");
    }
    else if (grade >= 50 && grade <= 54)
    {
        printf("Garde D (1.0) - Pass");
    }
    else if (grade >= 0 && grade <= 49)
    {
        printf("Grade F (0.0) - Fail");
    }
    return 0;
}