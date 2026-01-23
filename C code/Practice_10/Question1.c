#include <stdio.h>

int main() {
    FILE *ptr;
    int num1, num2, num3;
    ptr = fopen("Q1.txt", "r");
    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);

    fclose(ptr);
    printf("The values of a, b and c is: %d %d %d", num1, num2, num3);
    return 0;
}