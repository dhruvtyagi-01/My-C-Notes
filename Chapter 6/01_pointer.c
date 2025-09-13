#include <stdio.h>

int main() {
    int i = 67;
    int* j = &i; // j is a pointer which is pointing to address of i (j is an integer pointer)

    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);

    printf("The value at address j is %d\n", *j);
    printf("The value at address i is %d\n", *(&i));

    return 0;
}