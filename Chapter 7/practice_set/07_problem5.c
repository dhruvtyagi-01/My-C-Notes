#include <stdio.h>

int counter(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d element:", (i+1));
        scanf("%d", &arr[i]);
    }

    printf("the number of positive integers is %d", counter(arr, 5));
    return 0;
}