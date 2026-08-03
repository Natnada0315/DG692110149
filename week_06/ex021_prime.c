#include <stdio.h>
int main()
{
    int n;
    printf("Enter positive integer :");
    scanf("%d", &n);

    int is_prime = 1;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            is_prime = 0;
            break;
        }
    }
    if (is_prime)
        printf("%d is a prime Number\n", n);
    else
        printf("%d is NOT a Prime Number\n", n);

    return 0;
}
