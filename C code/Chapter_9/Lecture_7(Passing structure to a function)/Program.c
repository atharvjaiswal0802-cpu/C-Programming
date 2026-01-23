#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};

void show(struct employee e1){
    printf("The code of e1 is: %d\n", e1.code);
    printf("The salary of e1 is: %.2f\n", e1.salary);
    printf("The name of e1 is: %s\n", e1.name);
}

int main() {
    struct employee e1;
    e1.code = 100;
    e1.salary = 34.56;
    strcpy(e1.name, "John Doe");
    
    printf("The data for e1 employee is: \n");
    show(e1);
    return 0;
}