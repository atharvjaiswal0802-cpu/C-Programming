#include <stdio.h>
void change_value(int *a){
    *a = 10 * (*a);
}

int main() {
    int x = 4;
    printf("The value of x before the calling of function is %d\n", x);
    change_value(&x);
    printf("The value of x before the calling of function is %d\n", x);
    return 0;
}