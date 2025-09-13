#include <stdio.h>

int main() {
    int n;

    printf("Enter number = ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Hello world %d\n", i);
    }
    
    return 0;
}