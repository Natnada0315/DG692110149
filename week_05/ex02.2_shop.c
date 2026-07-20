#include <stdio.h>
int main()
{
    int item, price, gold, sum;
    printf("=== ITEM SHOP === \n");
    printf("1. Health potion - 50 Gold (+50 hp) \n");
    printf("2. Mana Potion - 80 Gold (+30 Mp) \n");
    printf("3. Iron Sword - 500 Gold (+20 Atk) \n");
    printf("4. Leather Armor - 300 Gold (+15 DEF) \n");
    printf("5. Exit \n");

    printf("Do you have many gold? : ");
    scanf("%d", &gold);
    printf("Select Your item (put number) : ");
    scanf("%d", &item);

    switch (item)
    {
    case 1:
        price = 50;
        break;
    case 2:
        price = 80;
        break;
    case 3:
        price = 500;
        break;
    case 4:
        price = 300;
        break;
    default:
        printf("Invalid");
        break;
    }

    if (gold >= price)
    {
        sum = gold - price;

        switch (item)
        {
        case 1:
            printf("=== Purchase === \n");
            printf("Health potion : 50 Gold \n");
            price = 50;

            printf("Remaining : %d \n", sum);
            printf("HP Bonus : +50 \n");
            break;

        case 2:
            printf("=== Purchase === \n");
            printf("Mana Potion : 80 Gold \n");
            price = 80;

            printf("Remaining : %d \n", sum);
            printf("Mp Bonus : +30 \n");
            break;

        case 3:
            printf("=== Purchase === \n");
            printf("Iron Sword : 500 Gold \n");
            price = 500;

            printf("Remaining : %d \n", sum);
            printf("ATK Bonus : +20 \n");
            break;

        case 4:
            printf("=== Purchase === \n");
            printf("Leather Armor : 300 Gold \n");
            price = 300;

            printf("Remaining : %d \n", sum);
            printf("DEF Bonus : +15 \n");
            break;
        case 5:
            printf("EXIT!");
            break;
        }
        printf("Item purchased successfully! ✓ \n");
    }
    else
    {
        printf("Not enough Gold");
    }

    return 0;
}