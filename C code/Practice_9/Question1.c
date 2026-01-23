#include <stdio.h>
typedef struct vector{
    int x;
    int y;
}vec;

int main() {
    vec v1, v2;
    v1.x = 34;
    v2.y = 45;
    printf("The dim in X is %d and in Y is %d\n", v1.x, v2.y);
    return 0;
}