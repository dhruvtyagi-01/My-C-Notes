//To convert centigrade to fahrenheit

#include <stdio.h>

int main() {
    float c, f;
    //input for temperature
    printf("Enter the temperature = ");
    scanf("%f", &c);
    //calculation
    f =  (c * (9.0/5.0)) + 32;
    //Result
    printf("Temperature in fahrenheit will be %f", f);
    return 0;
}