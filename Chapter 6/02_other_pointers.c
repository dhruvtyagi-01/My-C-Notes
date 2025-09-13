#include <stdio.h>

int main() {
    char i = 'A';
    char* j = &i; // j is a pointer which is pointing to address of i (j is an character pointer)

    float k = 5.67;
    float* l = &k; // l is a pointer which is pointing to address of k (l is an float pointer)

    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);

    printf("The value at address j is %d\n", *j);
    printf("The value at address i is %d\n", *(&i));

    return 0;
}