#include <stdio.h>

int main()
{
    int y = 10;
    int x = 11;

    y = ++x;

    printf("%d\n", y);
    printf("%d\n", x);
    return 0;
}