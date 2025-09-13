#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", numbers[i]);
    }
    printf("\n");
    printf("the size of array is %d\n",sizeof(numbers));
    
    return 0;
}