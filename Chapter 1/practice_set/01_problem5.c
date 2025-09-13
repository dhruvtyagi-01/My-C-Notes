//To find simple interest

#include <stdio.h>

int main() {
    float p, r, i;
    int t;
    //Input for amount
    printf("Enter the amount = ");
    scanf("%f", &p);
    //Input for rate of interest
    printf("Enter the rate of interest = ");
    scanf("%f", &r);
    //Input for time
    printf("Enter the no. of years = ");
    scanf("%d", &t);
    //calculation
    i = (p * r * t)/100;
    //result
    printf("The interest will be %f", i);
    return 0;
}