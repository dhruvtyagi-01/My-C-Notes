#include <stdio.h>

int strLength(char str[])
{
    int i = 0, count;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1;
    return count;
}

void myStrcpy(char target[], char source[]){
    for (int i = 0; i < strLength(source); i++)
    {
        target[i] = source[i];
    }
    target[strLength(source)] = '\0';
}

int main() {
    char source[] = "dhruv";
    char target[30];
    myStrcpy(target, source); // target now contains "dhruv"
    printf("%s %s", source, target);
    return 0;
}