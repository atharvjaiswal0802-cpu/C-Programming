#include <stdio.h>
int factorial(int x) {
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else {
        return x * factorial(x - 1);
    }
}

int main() {
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);

    printf("The factorial of the %d is %d", num, factorial(num));
    return 0;
}