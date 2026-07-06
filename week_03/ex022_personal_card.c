#include <stdio.h>
int main()
{
    // ประกาศและกาหนดค่าตัวแปร

    char name[20];
    int age;
    float gpa;
    char favorite_subject[50];

    // แสดงค่าและขนาด
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your GPA: ");
    scanf("%f", &gpa);
    printf("Enter your favorite subject: ");
    scanf("%s", &favorite_subject);

    printf("=== Personal Card ===\n");
    printf("┌───────────────────────────────┐\n");
    printf("|char name = %-10s\t\t|\n", name);
    printf("|int age = %-10d\t\t|\n", age);
    printf("|float gpa = %-10.2f\t\t|\n", gpa);
    printf("|char favorite_subject = %s\t|\n", favorite_subject);
    printf("└───────────────────────────────┘\n");
    return 0;
}