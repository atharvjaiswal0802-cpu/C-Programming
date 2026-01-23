#include <stdio.h>

void convert(int x) {
    int faren;
    faren = (x * 9/5) + 32;
    printf("The value of temperature in farehiet is %d", faren);
}

int main() {
    int celsius;
    printf("Enter the value of temperature\n");
    scanf("%d", &celsius);

    convert(celsius);
    return 0;
}