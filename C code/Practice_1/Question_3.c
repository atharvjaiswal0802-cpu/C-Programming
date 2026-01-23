#include <stdio.h>

int main() {
    float celsius, far;
    
    printf("Enter the value in degree celsius: ");
    scanf("%f", &celsius);
    far = (celsius * 9 / 5) + 32;

    printf("The conversion of celsius to faranhit is: %f faranhit", far);
    return 0;
}