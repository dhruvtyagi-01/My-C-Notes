#include <stdio.h>

int main() {
    int i = 0, num, sum = 0;

    printf("Enter number = ");
    scanf("%d", &num);

    while (i <= num)
    {
        sum += i;
        i++;
    }
    
    printf("%d", sum);

    return 0;
}