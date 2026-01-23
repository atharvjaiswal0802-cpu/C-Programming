#include <stdio.h>

int main() {
    int radius;
    float pi = 3.14;

    printf("Enter the value of radius\n");
    scanf("%d", &radius);

    printf("The area of circle will be: %f m^2", pi * radius * radius);
    return 0;
}