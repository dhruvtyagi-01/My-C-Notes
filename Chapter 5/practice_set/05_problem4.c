#include <stdio.h>

int fibonacci(int);

int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }

    int f = fibonacci(n - 1) + fibonacci(n - 2);

    return f;
}

int main()
{
    int num;

    printf("Enter the number:");
    scanf("%d", &num);

    printf("Fibonacci number at position %d is %d\n", num, fibonacci(num));

    return 0;
}