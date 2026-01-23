#include <stdio.h>

int main()
{
    int a = 5;
    // int b = 8.5; This is not recommended because 8.5 is not an integer
    float b = 8.5;
    char c = 'f';
    //%d, %f and %c are library functions
    printf("The value of a is %d \n", a);
    printf("The value of b is %f \n", b);
    printf("The value of c is %c \n", c);
    return 0;
}