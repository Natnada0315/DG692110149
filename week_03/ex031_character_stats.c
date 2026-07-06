#include <stdio.h>
int main()
{
    // ประกาศและกาหนดค่าตัวแปร

    char name[20];
    int HP;
    int Attack_Power;
    int Defense;
    int Level = 1;

    // แสดงค่าและขนาด
    printf("=== สร้างตัวละคร ===\n");
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your HP: ");
    scanf("%d", &HP);
    printf("Enter your Attack Power: ");
    scanf("%d", &Attack_Power);
    printf("Enter your Defense: ");
    scanf("%d", &Defense);
    printf("Enter your Level: ");
    scanf("%d", &Level);

    printf("=== สรุปข้อมูลตัวละคร ===\n");
    printf("char name = %s\n", name);
    printf("int HP = %d\n", HP);
    printf("int Attack Power = %d\n", Attack_Power);
    printf("int Defense = %d\n", Defense);
    printf("int Level = %d\n", Level);
    return 0;
}