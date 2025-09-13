#include <stdio.h>
#include <string.h>

void encrypt(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] += 1;
    }
}

int main()
{
    char str[100];
    printf("Enter the string to encrypt:\n");
    fgets(str, sizeof(str), stdin);
    encrypt(str);
    printf("The encrypted string is:- %s", str);
    return 0;
}