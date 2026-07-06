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

    printf("=== Character Sheet ===\n");
    printf("╔═══════════════════════════════╗\n");
    printf("║  %s\t\t\t\t║\n", name);
    printf("╠═══════════════════════════════╣ \n");
    printf("║ Level :%d\t\t\t║\n", Level);
    printf("║ HP :%d\t\t\t\t║\n", HP);
    printf("║ ATK :%d\t\t\t║\n", Attack_Power);
    printf("║ DEE :%d\t\t\t║\n", Defense);
    printf("╠═══════════════════════════════╣\n");
    printf("║ HP Bar : [██████████ ] 100%   ║\n");
    printf("╚═══════════════════════════════╝\n");

    return 0;
}