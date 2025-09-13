#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter number = ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum += i * num;
    }

    printf("%d", sum);
    
    return 0;
}