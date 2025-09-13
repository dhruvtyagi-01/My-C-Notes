#include <stdio.h>
#include <string.h>

int main()
{

    char c;

    printf("Enter the element to check if present or not:\n");
    scanf("%c", &c);

    int count = 0;

    char str[50];

    printf("Enter the string elements:\n");
    scanf("%49s", str);

    int found = 0;
    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        if (str[i] == c)
        {
            found = 1;
            break;
        }
    }
    if (found)
    {
        printf("The element %c is present in this string", c);
    }
    else
    {
        printf("The element %c is not present in this string", c);
    }

    return 0;
}