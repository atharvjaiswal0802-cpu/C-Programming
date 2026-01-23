#include <stdio.h>
#include <string.h>
struct empolyee
{
    int code;
    float salary;
    char name[20];
};


int main() {
    struct empolyee e1;
    struct empolyee *ptr;
    ptr = &e1;
    ptr->code = 1001;
    printf("%d", e1.code);
    return 0;
}