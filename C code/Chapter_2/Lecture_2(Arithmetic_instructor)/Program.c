#include <stdio.h>

int main() {
    float a = 4;
    float b = 3;

    printf("The value of a + b is %f\n", a + b);
    printf("The value of a - b is %f\n", a - b);
    printf("The value of a * b is %f\n", a * b);
    printf("The value of a / b is %f\n", a / b);


    // int z = a + b; //Legal
    // int a + b = z; //Illegal
    // printf("The value of z is %d\n", z);


    /*This is modular division operator(%) and it s not applied on the float and sign of result is same as numerator's sign*/
    // printf("The remainder when 5 is divided by 2 is %d\n", 5%2);
    // printf("The remainder when 5 is divided by 2 is %d\n", -5%2);
    // printf("The remainder when 5 is divided by 2 is %d\n", 5%-2);
    

    /*No operator is assumed to be present*/
    // printf("The value of 4 * 5 is %d\n", (4)(5), 4.5); //Wrong this will not give 20
    // //There is no operator to perform exponentiation in C
    // printf("The value of 4 ^ 5 is %d\n", 4^5); //Wrong this will not give 5 as a power of 4
    // //Instead use this
    // printf("The value of 4 ^ 5 is %d\n", pow(4, 5));


    /*Type conversion*/
    // int and int = int
    // printf("The value of 5 + 6 is %d\n", 5 + 6);
    // int and float = float
    // printf("The value of 5 + 6.7 is %d\n", 5 + 6.7);
    // float and float = float
    // printf("The value of 5.4 + 6.6 is %d\n", 5.4 + 6.6);
 
    return 0;
}