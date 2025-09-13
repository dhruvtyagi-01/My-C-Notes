#include <stdio.h>

int* sum(int x, int y)
{
    int add = x + y;
    int* ptr = &add;
    printf("The sum is %d\n", add);

    return ptr;
}

float* average(int x, int y)
{
    float avg = (x + y) / 2.0;
    float* ptr = &avg;
    printf("The average is %0.2f\n", avg);

    return ptr;
}

int main()
{
    int a = 5;
    int b = 7;
    int* ptr1;
    float* ptr2;

    ptr1 = sum(a, b);
    ptr2 = average(a, b);

    printf("The address of sum is %u and of average is %u", ptr1, ptr2);

    return 0;
}