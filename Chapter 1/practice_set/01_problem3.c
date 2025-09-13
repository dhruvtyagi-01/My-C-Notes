//To find volume of cylinder

#include <stdio.h>

int main() {
    int radius;
    int height;
    float PI = 3.14;
    //Input for radius
    printf("Enter radius = ");
    scanf("%d", &radius);
    //Input for height
    printf("Enter height = ");
    scanf("%d", &height);
    //Result
    printf("The volume of cylinder is %f", PI*radius*radius*height);
    return 0;
}