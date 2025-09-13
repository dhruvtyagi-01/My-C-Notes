#include <stdio.h>

float force(float);

float force(float x)
{
    float f = x * 9.8; // Force = m x g (g = 9.8 m/s2)

    return f;
}

int main()
{
    float mass;

    printf("Enter the mass in Kgs:");
    scanf("%f", &mass);

    printf("The force is %.3f N", force(mass));

    return 0;
}