#include <stdio.h>

int main() {
    FILE *ptr;
    char c;
    ptr = fopen("getcdemo.txt", "r");
    c = fgetc(ptr); //stores the first character(t)
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(ptr); //switches to next character(h)
    }
    fclose(ptr);
    return 0;
}