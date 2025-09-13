#include <stdio.h>

int main() {
    int a = 5;
    int* ptr1 = &a;
    int** ptr2 = &ptr1;

    printf("The value of a is %d", *(*ptr2));
    return 0;
}