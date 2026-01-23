#include <stdio.h>
int sum(int a, int b) { //Here a and b are parameters
    int result;
    result = a + b;
    return result;
}
int main() {
    int c;
    c = sum(2, 5); //Here 2 and 5 are arguments
    return 0;
}