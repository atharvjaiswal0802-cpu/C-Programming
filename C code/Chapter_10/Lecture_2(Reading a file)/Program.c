#include <stdio.h>

int main() {
    FILE *ptr;
    int num1;
    int num2;
    ptr = fopen("Atharv.txt", "r");
    fscanf(ptr, "%d", &num1);
    fscanf(ptr, "%d", &num2);
    fclose(ptr);
    printf("The value of number 1 is: %d\n", num1);
    printf("The value of number 2 is: %d\n", num2);
    return 0;
}