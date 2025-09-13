#include <stdio.h>

int main()
{
   // char str[] = {'a', 'b', 'c', 'd', '\0'};
   char str[] = "abcd";  // Same as char str[] = {'a', 'b', 'c', 'd', '\0'};

    for (int i = 0; i < 4; i++)
    {
        printf("%c ", str[i]);
    }

    return 0;
}