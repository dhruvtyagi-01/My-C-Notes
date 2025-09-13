#include <stdio.h>

int main()
{
    int num, fact = 1;

    printf("Enter number = ");
    scanf("%d", &num);

    for (int i = num; i >= 1; i--)
    {
        fact *= i;
    }
    printf("factorial = %d ", fact);

    return 0;
}