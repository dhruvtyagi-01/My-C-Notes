#include <stdio.h>

int main() {
    char str[30];

    printf("Enter elements of string:");
    fgets(str, sizeof(str), stdin); // The entered string is stored in str

    //printf("%s", str);
    puts(str);
    printf("good afternoon");
    return 0;
}