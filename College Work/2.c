// WAP to find HCF of 2 numbers

#include <stdio.h>

int main()
{
    int num1, num2, hcf;

    printf("Enter number 1 = ");
    scanf("%d", &num1);

    printf("Enter number 2 = ");
    scanf("%d", &num2);

    for (hcf = num1 < num2 ? num1 : num2; hcf >= 1; hcf--)
    {
        if (num1 % hcf == 0 && num2 % hcf == 0)
        {
            break;
        }
        
    }
    printf("HCF is %d", hcf);

    return 0;
}