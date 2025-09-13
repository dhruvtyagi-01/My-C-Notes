#include <stdio.h>
#include <string.h>

int main() {

    char str[] = "Dhruv";
    printf("%d\n", strlen(str));

    char source[] = "Dhruv";
    char target[50];
    strcpy(target, source); // target now contains Dhruv
    printf("%s %s\n", source, target);

    char str1[50] = "Hello ";
    char str2[50] = "Dhruv";

    strcat(str1, str2);
    printf("%s\n", str1);

    int a = strcmp("kite", "dull");
    printf("%d", a);

    return 0;
}