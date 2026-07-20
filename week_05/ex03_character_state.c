#include <stdio.h>
int main()
{
    int max_hp, hp;
    int damage;
    _Bool is_poisoned;
    int attack_count;

    printf("Enter your Hp : ");
    scanf("%d", &max_hp);

    printf("Enter your damage : ");
    scanf("%d", &damage);

    printf("Enter your is_poisoned : ");
    scanf("%d", &is_poisoned);

    printf("Enter your attack_count : ");
    scanf("%d", &attack_count);

    hp = max_hp - damage;
    printf("=== Character Status === \n");
    if (hp <= 0)
    {
        printf("state = DEAD \n");
    }
    else if (hp < 0.25)
    {
        printf("state = CRITICAL \n");
    }
    else if (is_poisoned == 1)
    {
        printf("state = POISONED \n");
    }
    else
    {
        printf("state = NORMAL \n");
    }
    if (attack_count >= 5)
    {
        printf("🌟Ultimate Ready!!\n");
    }

    return 0;
}