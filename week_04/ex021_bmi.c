#include <stdio.h>
int main()
{
    float weight, height, bmi;

    printf("Enter your weight (kg): ");
    scanf("%f", &weight);
    printf("Enter your height (m): ");
    scanf("%f", &height);

    bmi = weight / (height * height);
    printf("Your BMI is: %.2f = ", bmi);

    if (bmi < 18.5)
    {
        printf("underweight");
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        printf("Normal");
    }
    else if (bmi >= 25.0 && bmi <= 29.9)
    {
        printf("overweight");
    }
    else if (bmi >= 30.0)
    {
        printf("obese");
    }
    return 0;
}