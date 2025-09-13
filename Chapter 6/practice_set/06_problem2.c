#include <stdio.h>

int address(int*);

int address(int* ptr){
    printf("The value of ptr is %d\n", ptr);
    printf("The value at ptr is %d\n", *ptr);
    return 0;
}

int main() {
    int i = 6;
    int* ptr = &i;
    printf("The address of i is %u\n", &i);
    address(ptr);

    return 0;
}