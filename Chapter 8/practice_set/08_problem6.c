#include <stdio.h>
#include <string.h>

void decrypt(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] -= 1;
    }
}

int main()
{
    char str[100];
    printf("Enter the string to decrypt:\n");
    fgets(str, sizeof(str), stdin);
    decrypt(str);
    printf("The decrypted string is:- %s", str);
    return 0;
}