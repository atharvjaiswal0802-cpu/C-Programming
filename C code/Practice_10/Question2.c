#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    FILE *ptr;
    ptr = fopen("Q2.txt", "w");
    fprintf(ptr, "The multiplication table of %d is: \n", num);
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d x %d = %d\n", num, i, num*i);
    }
    fclose(ptr);
    return 0;
}