//To find area of an rectangle

#include <stdio.h>

int main() {
    int length;
    int breadth;
    //Input for length
    printf("Enter the length = ");
    scanf("%d", &length);
    //Input for breadth
    printf("Enter the breadth = ");
    scanf("%d", &breadth);
    //Result
    printf("The area of rectangke is %d", length*breadth);

    return 0;
}