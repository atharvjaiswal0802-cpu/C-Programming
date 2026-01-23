#include <stdio.h>

int main() {
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    printf("The divisibility test returns %d\n", num%97);
    //If the value is 0 then the number is divisible by 97
    //If the value is not 0 then the number is not divisible by 97
    return 0;
}