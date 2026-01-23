#include <stdio.h>

int main() {
    int n;
    int i = 1;
    printf("Enter the number where the series of natural numbers are to be printed\n");
    scanf("%d", &n);

    printf("The numbers are\n");
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= n);
    
    return 0;
}