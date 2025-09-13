#include <stdio.h>

int factorial(int n);

int factorial(int n)
{
    if (n == 0 || n == 1) // Base condition for factorial
    {
        return 1;
    }

    // Factorial(n) = Factorial(n-1) x n
    return factorial(n - 1) * n;
}

int main()
{
    int fact;

    printf("Enter number:");
    scanf("%d", &fact);

    printf("The factorial of %d is %d", fact, factorial(fact));

    return 0;
}