#include <stdio.h>

int main()
{
    int numbers[5] = {167, 278, 356, 492, 563};
    // int* ptr = &numbers[0];
    int* ptr = numbers; // Same as int* ptr = &numbers[0];

    for (int i = 0; i < 5; i++)
    {
        printf("The value at index %d is %d\n", i, *ptr++);
    }
    
    return 0;
}