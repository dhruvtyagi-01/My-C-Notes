#include <stdio.h>

int main()
{
    // POINTER ARITHMETIC USING INTEGER POINTER
    int a = 7;
    int *ptr1 = &a;

    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr1);
    ptr1++;
    printf("The value of ptr1 is %d\n\n", ptr1);

    // POINTER ARITHMETIC USING CHARACTER POINTER
    char b = 'A';
    char *ptr2 = &b;

    printf("The address of b is %u\n", &b);
    printf("The address of b is %u\n", ptr2);
    ptr2++;
    printf("The value of ptr2 is %d\n\n", ptr2);

    // POINTER ARITHMETIC USING FLOAT POINTER
    float c = 7;
    float *ptr3 = &c;

    printf("The address of c is %u\n", &c);
    printf("The address of c is %u\n", ptr3);
    ptr3++;
    printf("The value of ptr3 is %d\n", ptr3);

    return 0;
}