#include <stdio.h>
#include <string.h>

int main() {

    char c;

    printf("Enter the element to count:\n");
    scanf("%c", &c);

    int count = 0;

    char str[50];

    printf("Enter the string elements:\n");
    scanf("%49s", str);

    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        if (str[i] == c)
        {
            count++;
        }
        
    }

    printf("The number of '%c's in this string are %d", c, count);
    
    return 0;
}