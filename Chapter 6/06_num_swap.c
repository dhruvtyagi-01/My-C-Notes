#include <stdio.h>

void swap(int*, int*);

void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;

    printf("Enter first num:");
    scanf("%d", &x);

    printf("Enter second num:");
    scanf("%d", &y);

    swap(&x, &y);

    printf("The value of first num is %d and value of second num is %d", x, y);

    return 0;
}