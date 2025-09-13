// WAP to find LCM of 2 numbers

#include <stdio.h>

int main()
{
    int num1, num2, lcm;

    printf("Enter num 1 = ");
    scanf("%d", &num1);

    printf("Enter num 2 = ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        lcm = num1;
    }
    else
    {
        lcm = num2;
    }

    while (1)
    {
        if (lcm % num1 == 0 && lcm % num2 == 0)
        {
            break;
        }

        lcm++;
    }

    printf("The LCM is %d", lcm);

    return 0;
}