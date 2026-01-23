#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

int main() {
    struct employee atharv = {1001, 54.45, "Atharv"};
    printf("Code is: %d\n", atharv.code);
    printf("Salary is: %.2f\n", atharv.salary);
    printf("Name is: %s\n", atharv.name);
    return 0;
}