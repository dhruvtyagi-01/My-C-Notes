#include <stdio.h>

int main()
{
    int marks[5];

    printf("Enter marks of 5 students:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("the address of marks are:%u\n", &marks[i]);
    }
    
    return 0;
}