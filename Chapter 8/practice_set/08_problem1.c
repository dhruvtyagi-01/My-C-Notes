#include <stdio.h>

int main()
{
    char str[5];

    printf("Enter elements:");
    // scanf("%4s", str);
    for (int i = 0; i < 4; i++)
    {
        scanf("%c", &str[i]);
    }
    str[4] = '\0';
    
    printf("%s", str);

    return 0;
}