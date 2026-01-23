#include <stdio.h>
#include<string.h>

struct empolyee {
    int code;
    float salary;
    char name[10];
};

int main() {
    struct empolyee e1;
    e1.code = 100;
    e1.salary = 34.454;
    // e1.name = "Atharv" //won't work
    strcpy(e1.name, "Atharv");

    printf("%d\n", e1.code);
    printf("%.3f\n", e1.salary);
    printf("%s\n", e1.name);
    return 0;
}