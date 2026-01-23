#include <stdio.h>

void change(int a) {
    a = 77;
}

int main() {
    int b;
    b = 344;
    printf("The value of b before the function is called is %d\n", b);
    change(b);
    printf("The value of b after the function is called is %d\n", b);
    return 0;
}