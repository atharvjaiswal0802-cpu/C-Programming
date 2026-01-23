#include <stdio.h>

int main() {
    int i = 5, a=5, b=5, c=5;
    printf("The value of i is %d\n", i++); //i=5
    printf("The value of i is %d\n", i);   //i=6

    printf("The value of i is %d\n", ++a); //a=6
    printf("The value of i is %d\n", a);   //a=6

    printf("The value of i is %d\n", b--); //b=5
    printf("The value of i is %d\n", b);   //b=4

    printf("The value of i is %d\n", --c); //c=4
    printf("The value of i is %d\n", c);   //c=4
    return 0;
}