#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // this declares a new user defined data type
    float salary;
    char name[10];
}; // semicolon is important

int main() {
    struct employee e1, e2, e3;

    // 1st employee
    printf("Enter the value of code:\n");
    scanf("%d", &e1.code);

    printf("Enter the value of salary:\n");
    scanf("%f", &e1.salary);

    printf("Enter the name:\n");
    scanf("%s", &e1.name);

    // 2nd employee
    printf("Enter the value of code:\n");
    scanf("%d", &e2.code);
    
    printf("Enter the value of salary:\n");
    scanf("%f", &e2.salary);

    printf("Enter the name:\n");
    scanf("%s", &e2.name);
    
    // 3rd employee
    printf("Enter the value of code:\n");
    scanf("%d", &e3.code);
    
    printf("Enter the value of salary:\n");
    scanf("%f", &e3.salary);
    
    printf("Enter the name:\n");
    scanf("%s", &e3.name);
    
    printf("The details of 1st employee are:\n %d\n %0.2f\n %s\n", e1.code, e1.salary, e1.name);
    printf("The details of 2nd employee are:\n %d\n %0.2f\n %s\n", e2.code, e2.salary, e2.name);
    printf("The details of 3rd employee are:\n %d\n %0.2f\n %s\n", e3.code, e3.salary, e3.name);

    return 0;
}