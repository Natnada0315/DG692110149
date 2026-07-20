#include <stdio.h>
int main()
{
    int item;
    printf("=== ITEM SHOP === \n");
    printf("Gold: 500 \n");
    printf("1. Health potion - 50 Gold (+50 hp) \n");
    printf("2. Mana Potion - 80 Gold (+30 Mp) \n");
    printf("3. Iron Sword - 500 Gold (+20 Atk) \n");
    printf("4. Leather Armor - 300 Gold (+15 DEF) \n");
    printf("5. Exit \n");
    printf("Select Your item (put number) : ");
    scanf("%d", &item);

    switch (item)
    {
    case 1:
        printf("=== Purchase === \n");
        printf("Health potion : 50 Gold \n");
        printf("Remaining : 450 \n");
        printf("HP Bonus : +50 \n");
        printf("Item purchased successfully! ✓ \n");
        break;
    case 2:
        printf("=== Purchase === \n");
        printf("Mana Potion : 80 Gold \n");
        printf("Remaining : 420 \n");
        printf("Mp Bonus : +30 \n");
        printf("Item purchased successfully! ✓ \n");
        break;
    case 3:
        printf("=== Purchase === \n");
        printf("Iron Sword : 500 Gold \n");
        printf("Remaining : 0 \n");
        printf("ATK Bonus : +20 \n");
        printf("Item purchased successfully! ✓ \n");
        break;
    case 4:
        printf("=== Purchase === \n");
        printf("Leather Armor : 300 Gold \n");
        printf("Remaining : 200 \n");
        printf("DEF Bonus : +15 \n");
        printf("Item purchased successfully! ✓ \n");
        break;
    case 5:
        printf("EXIT!");
        break;
    }
    return 0;
}