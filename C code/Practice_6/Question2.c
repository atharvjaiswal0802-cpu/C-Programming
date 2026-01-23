//The address of i does not remain the same
#include <stdio.h>
void pass(int x){
    printf("The address of i after passing to a function is %d\n", x);
}
int main() {
    int i;
    printf("The address of i before passing to a function is %d\n", &i);
    pass(i);
    return 0;
}