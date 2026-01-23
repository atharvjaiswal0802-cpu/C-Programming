#include <stdio.h>

int main() {
    char *ptr = "Atharv"; //Will definitely work
    ptr = "Ananya";
    // char ptr[] = "Atharv"; //Will not work at all
    // ptr = "Ananya";
    printf("%s", ptr);

    return 0;
}