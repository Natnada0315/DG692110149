#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int target = rand() % 100 + 1;

    int guess, i;
    int attempts = 0;
    printf("=== Number Guessing Game (1-100) === \n");

    do
    {
        printf("Enter your guess :");
        scanf("%d", &guess);
        if (guess > target)
        {
            printf("Too High!\n");
        }
        else if (guess < target)
        {
            printf("Too Low!\n");
        }
        else
        {
            printf("Correct! You guess it in %d attemtps! : \n", attempts);
        }
        attempts++;
    } while (guess != target);

    return 0;
}