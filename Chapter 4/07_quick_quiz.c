#include <stdio.h>

int main()
{
    int n, i = 0;

    printf("Enter number = ");
    scanf("%d", &n);

    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= n);

    return 0;
}