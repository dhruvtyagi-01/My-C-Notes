#include <stdio.h>

void value(int*);

void value(int* ptr){
    *ptr *= 10;
}

int main() {
    int i = 1;
    int* ptr = &i;

    printf("The value of i is %d\n", i);
    value(ptr);
    printf("The value of i is %d\n", i);
    return 0;
}