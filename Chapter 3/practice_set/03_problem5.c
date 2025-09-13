#include <stdio.h>

int main()
{
    char ch;

    printf("Enter character = ");
    scanf("%c", &ch);

    printf("The character is %c\n", ch);
    printf("The ASCII value of character is %d\n", ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("This character is lowercase");
    }
    else
    {
        printf("This character is uppercase");
    }
    return 0;
}