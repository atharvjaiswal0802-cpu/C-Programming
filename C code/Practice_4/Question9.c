#include <stdio.h>

int main() {
    //Repeating quesion 8 using while loop
    int factorial = 1, i = 1;
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    while (i <= n)
    {
        factorial *= i;
        i++;
    }
    printf("The factorial of %d is %d", n, factorial);
    return 0;
}