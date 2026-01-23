#include <stdio.h>
#include <math.h>
int main() {
    int side;
    printf("Enter the side lenght\n");
    scanf("%d", &side);

    printf("The area of square is %fcm^2", pow(side, 2));
    return 0;
}