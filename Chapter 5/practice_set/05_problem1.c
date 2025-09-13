#include <stdio.h>
float average(int, int, int);

float average(int x, int y, int z)
{
    float sum = x + y + z;
    float avg = sum / 3;
    printf("The avg is %0.2f\n", avg);

    return avg;
}

int main()
{
    int a, b, c;

    printf("Enter first number:");
    scanf("%d/n", &a);

    printf("Enter second number:");
    scanf("%d/n", &b);

    printf("Enter third number:");
    scanf("%d/n", &c);

    average(a, b, c);

    return 0;
}