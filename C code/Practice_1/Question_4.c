#include <stdio.h>

int main() {
    int principal, rate, years;
    
    printf("Enter the value of principal: \n");
    scanf("%d", &principal);

    printf("Enter the value of rate: \n");
    scanf("%d", &rate);

    printf("Enter the value of years: \n");
    scanf("%d", &years);

    int simpleInterest = principal * rate * years;

    printf("The value of simpleInterest is: %d", simpleInterest / 100);
    return 0;
}