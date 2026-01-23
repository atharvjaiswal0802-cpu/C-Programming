#include <stdio.h>
typedef struct number{
    int real;
    int imag;
}num;

int main() {
    num n1;
    n1.real = 3;
    n1.imag = 4;
    printf("The complex number is %d + %di\n", n1.real, n1.imag);
    return 0;
}