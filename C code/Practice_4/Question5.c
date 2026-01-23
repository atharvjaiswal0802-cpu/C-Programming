#include <stdio.h>

int main() {
    int i = 1;
    int sum = 0;
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    while (i <= n)
    {
        sum += i;// sum = sum + i
        i++;
    }
    printf("The sum of first %d natural numbers is %d\n", n, sum);
    return 0;
}