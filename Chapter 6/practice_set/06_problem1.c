#include <stdio.h>

int main() {
    int a = 5;
    int* ptr = &a; 

    printf("the address of a is %u\n", &a);
    printf("The value of a is %d", *ptr);
    return 0;
}