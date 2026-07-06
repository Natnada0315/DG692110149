#include <stdio.h>
int main()
{
    // ประกาศและกาหนดค่าตัวแปร

    char name[20] = "Somsak";
    int age = 20;
    float gpa = 3.75f;
    char favorite_subject[50] = "Programming";

    // แสดงค่าและขนาด
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your GPA: ");
    scanf("%f", &gpa);
    printf("Enter your favorite subject: ");
    scanf("%s", &favorite_subject);

    printf("char name = %s\n", name);
    printf("int age = %d\n", age);
    printf("float gpa = %.2f\n", gpa);
    printf("char favorite_subject = %s\n", favorite_subject);
    return 0;
}