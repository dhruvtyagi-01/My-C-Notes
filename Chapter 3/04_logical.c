#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter value of a = ");
    scanf("%d", &a);
    printf("Enter value of b = ");
    scanf("%d", &b);
    if (a > 1 || a < 0)
    {
        printf("The value can be either 1 or 0 in a\n");
    }
    if (b > 1 || b < 0)
    {
        printf("The value can be either 1 or 0 in b");
    }
    else
    {
        printf("The value of a and b is %d\n", a && b);
        printf("The value of a or b is %d\n", a || b);
        printf("The value of not(a) is %d\n", !a);
    }
    return 0;
}