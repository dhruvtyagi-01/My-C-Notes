#include <stdio.h>

int main()
{
    int age;

    printf("Enter age = ");
    scanf("%d", &age);

    if (age > 60)
    {
        printf("You are a senior citizen");
    }
    else if (age > 40)
    {
        printf("You are an elder");
    }
    else if (age > 18)
    {
        printf("You are an adult");
    }
    else
    {
        printf("You are a minor");
    }
    return 0;
}