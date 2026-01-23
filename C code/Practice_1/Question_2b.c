#include <stdio.h>

int main() {
    int radius;
    int hieght;
    float pi = 3.14;

    printf("Enter the value of radius\n");
    scanf("%d", &radius);

    printf("Enter the value of hieght\n");
    scanf("%d", &hieght);

    printf("The volume of cylinder will be: %f m^3 ", pi * radius * radius * hieght);
    return 0;
}