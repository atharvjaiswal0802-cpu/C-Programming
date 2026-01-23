#include <stdio.h>

int main() {
    int length, breadth;

    printf("Enter the value of Length:\n");
    scanf("%d", &length);

    printf("Enter the value of Breadth:\n");
    scanf("%d", &breadth);

    printf("The area of rectangle will be: %d\n", length * breadth);
    return 0;
}