#include <stdio.h>

int change(int a);

int change(int a) {
    a = 73;
    return 0;
}

int main() {
    int b = 56;
    change(b);
    printf("b is %d", b);
    return 0;
}