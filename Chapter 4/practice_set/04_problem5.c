#include <stdio.h>

int main()
{
    int num, not_prime = 0;

    printf("Enter number = ");
    scanf("%d", &num);

    if (num == 0 || num == 1)
    {
        not_prime = 1;
    }
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0 && num != 2)
            {
                not_prime = 1;
                break;
            }
        }
    }

    if (not_prime)
    {
        printf("%d is not prime", num);
    }
    else
    {
        printf("%d is prime", num);
    }

    return 0;
}