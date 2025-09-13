// SUm of numbers from 1 to n

#include <stdio.h>

int main()
{
    int n, i = 0, sum = 0;

    printf("Enter number = ");
    scanf("%d", &n);

    while (i < n)
    {
        i++;
        sum += i;
    }

    printf("%d", sum);

    return 0;
}