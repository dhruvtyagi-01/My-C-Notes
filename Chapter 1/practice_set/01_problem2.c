//To find area of circle

#include <stdio.h>

int main() {
    int radius;
    float PI = 3.14;
    //Input for radius
    printf("Enter radius = ");
    scanf("%d", &radius);
    //Result
    printf("The area of circle is %d", PI*radius*radius);
    return 0;
}