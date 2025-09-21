#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code; // this declares a new user defined data type
    float salary;
    char name[10];
} emp; // semicolon is important

int main() {
    emp e1;
    e1.code = 54;
    e1.salary = 10000;
    strcpy(e1.name, "Dhruv");

    printf(" %d\n %0.2f\n %s\n", e1.code, e1.salary, e1.name);

    return 0;
}