#include <stdio.h>

// Function prototype
int sum(int, int);

// Function definition
int sum(int x, int y)
{
    printf("The sum is %d\n", x+y);
    return x+y;
}


int main() {
    
    int a = 4, b = 6;
    int a1 = 64, b1 = 87;
    int a2 = 343, b2 = 438;

    sum(a,b);
    sum(a1,b1);
    int c = sum(a2,b2);   // FUnction calling
    
    return 0;
}