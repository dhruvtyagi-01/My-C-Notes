#include <stdio.h>

struct employee
{
    int code; // this declares a new user defined data type
    float salary;
    char name[10];
}; // semicolon is important

int main() {
    
    struct employee facebook[100]; // an array of structures

    //  we can access data using:
    facebook[0].code = 1;
    facebook[1].code = 2;
    facebook[2].code = 3;

    struct employee e1 = {1, 50, "dhruv"};
    printf("%d %f %s", e1.code, e1.salary, e1.name);  
    return 0;
}