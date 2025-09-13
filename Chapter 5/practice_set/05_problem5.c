#include <stdio.h>

int sum_natural(int);

int sum_natural(int n)
{
    if (n == 1)
    {
        return 1;
    }
    
    int sum = sum_natural(n - 1) + n;

    return sum;
}

int main()
{
    int num;

    printf("Enter the number:");
    scanf("%d", &num);

    printf("The sum of %d natural numbers is %d", num, sum_natural(num));

    return 0;
}