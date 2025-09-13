#include <stdio.h>
#include <math.h>

int main() {
    
    float length, area;

    printf("Enter the length:");
    scanf("%f", &length);

    area = pow(length, 2);

    printf("The area of square is %f", area);

    return 0;
}