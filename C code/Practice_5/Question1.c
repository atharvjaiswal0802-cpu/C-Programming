#include <stdio.h>
float avg(int x, int y, int z) {
    return (x + y + z) / 3;
}

int main() {
    int a, b, c;
    printf("Enter the value of num1: ");
    scanf("%d", &a);

    printf("Enter the value of num2: ");
    scanf("%d", &b);

    printf("Enter the value of num3: ");
    scanf("%d", &c);

    printf("The average of %d, %d and %d is: %f", a, b, c, avg(a, b, c));
    return 0;
}