/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.*/
#include <stdio.h>

int main()
{
    int sub1, sub2, sub3;

    printf("Enter marks in subject 1 = ");
    scanf("%d", &sub1);

    printf("Enter marks in subject 2 = ");
    scanf("%d", &sub2);

    printf("Enter marks in subject 3 = ");
    scanf("%d", &sub3);

    if (sub1 < 33 || sub2 < 33 || sub3 < 33)
    {
        printf("You have failed due to less marks in individual subject(s)");
    }
    else if ((sub1 + sub2 + sub3) / 3 < 40)
    {
        printf("You have failed due to failed due to less percentage");
    }
    else
    {
        printf("You have passed!!");
    }

    return 0;
}