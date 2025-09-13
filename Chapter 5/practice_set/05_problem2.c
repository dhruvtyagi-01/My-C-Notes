#include <stdio.h>

float convertor(float);

float convertor(float x)
{
    float fahrenheit = ((9.0 / 5) * x) + 32;

    return fahrenheit;
}

int main()
{
    float temp;

    printf("Enter the temperature in Celsius:");
    scanf("%f", &temp);

    printf("The temp in Fahrenheit will be %0.3f\n", convertor(temp));

    return 0;
}