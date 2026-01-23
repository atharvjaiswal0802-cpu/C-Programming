#include <stdio.h>
int main() {
    int a = 4;
    int *b = &a;
    printf("The address of a is %d\n", &a);
    printf("The address of a is %d\n", *b);
    return 0;
}