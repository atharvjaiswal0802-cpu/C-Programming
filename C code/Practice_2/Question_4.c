#include <stdio.h>

int main() {
    int x = 2;
    int y = 3;
    int z = 3;
    int k = 1;
    double b = 3*x/y -z+k;
    printf("%d\n", b);
    // 3 * 2 / 3 - 3 + 1
    // 6 / 3 - 3 + 1
    // 2 - 3 + 1
    // 0
    return 0;
}