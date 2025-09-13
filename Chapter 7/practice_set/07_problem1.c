#include <stdio.h>

int main()
{
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = numbers;

    printf("The third element of array is %d", *(ptr + 2));
    return 0;
}