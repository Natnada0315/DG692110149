#include <stdio.h>
#include <math.h>
int main()
{

    int Player_Attack, Enemy_Defense, Hit_Number, damage;
    float base_damage;

    printf("=== COMBAT SIMULATOR === \n");
    printf("Player_Attack :");
    scanf("%d", &Player_Attack);

    printf("Enemy_Defense :");
    scanf("%d", &Enemy_Defense);

    printf("Hit_Number : ");
    scanf("%d", &Hit_Number);

    base_damage = Player_Attack - Enemy_Defense;

    if (Hit_Number % 5 == 0)
    {
        damage = (int)ceil((float)base_damage * 1.5f);

        printf("=== COMBAT SIMULATOR === \n");
        printf("Player_Attack : %d\n", Player_Attack);
        printf("Enemy_Defense : %d\n", Enemy_Defense);
        printf("Hit_Number : %d\n", Hit_Number);
        printf("Damage : %d", damage);
        printf("*** CRITICAL HIT! x1.5 ***\n");
    }
    else
    {
        // damage = (int)ceil(base_damage);
        printf("=== COMBAT SIMULATOR === \n");
        printf("Player_Attack : %d\n", Player_Attack);
        printf("Enemy_Defense : %d\n", Enemy_Defense);
        printf("Hit_Number : %d\n", Hit_Number);
        printf("Base_Damage : %.2f", base_damage);
        printf(" Normal\n");
    }
    return 0;
}