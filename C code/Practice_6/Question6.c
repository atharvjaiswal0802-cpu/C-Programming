#include <stdio.h>
void change_value(int a){
    a = 10 * (a);
}

int main() {
    int x = 4;
    printf("The value of x before the calling of function is %d\n", x);
    change_value(x);
    printf("The value of x before the calling of function is %d\n", x);
    return 0;
}
//No this program does not perform the desied operation since it uses call by value