#include <stdio.h>
#include<string.h>

struct empolyee {
    int code;
    float salary;
    char name[10];
};

int main() {
    struct empolyee e1, e2, e3;
    printf("Enter the code of empolyee number 1: ");
    scanf("%d", &e1.code);
    printf("Enter the salary of empolyee number 1: ");
    scanf("%f", &e1.salary);
    printf("Enter the name of empolyee number 1: ");
    scanf("%s", &e1.name);

    printf("Enter the code of empolyee number 2: ");
    scanf("%d", &e2.code);
    printf("Enter the salary of empolyee number 2: ");
    scanf("%f", &e2.salary);
    printf("Enter the name of empolyee number 2: ");
    scanf("%s", &e2.name);

    printf("Enter the code of empolyee number 3: ");
    scanf("%d", &e3.code);
    printf("Enter the salary of empolyee number 3: ");
    scanf("%f", &e3.salary);
    printf("Enter the name of empolyee number 3: ");
    scanf("%s", &e3.name);

    printf("Your empolyee table is here: \n");
    printf("%s\n", e1.name);
    printf("%d\n", e1.code);
    printf("%.3f\n\n", e1.salary);

    printf("%s\n", e2.name);
    printf("%d\n", e2.code);
    printf("%.3f\n\n", e2.salary);

    printf("%s\n", e3.name);
    printf("%d\n", e3.code);
    printf("%.3f\n", e3.salary);
    return 0;
}