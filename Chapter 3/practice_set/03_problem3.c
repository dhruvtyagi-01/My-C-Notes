#include <stdio.h>

int main()
{
    int income;  // Fixed missing semicolon
    float tax = 0;

    printf("Enter income = ");
    scanf("%d", &income);

    if (income <= 250000) {
        tax = 0;  // No tax if income is less than or equal to 2.5L
    }
    else if (income > 250000 && income <= 500000) {
        tax = 0.05 * (income - 250000);  // 5% tax on income above 2.5L and up to 5L
    }
    else if (income > 500000 && income <= 1000000) {
        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);  // 5% tax on 2.5L to 5L, 20% on the rest
    }
    else {
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);  // 5%, 20%, 30% tax
    }

    printf("The total tax you have to pay is %.2f\n", tax);  // Added rounding to 2 decimal places

    return 0;
}
