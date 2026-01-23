#include <stdio.h>

int main() {
    int i = 6;
    int *a = &i;
    int **b = &a;
    printf("The value of i (by pointer) is %d\n", *a);
    printf("The value of i (by pointer to pointer) is %d\n", **b);
    return 0;
}