#include <stdio.h>

int main() {
    FILE *ptr, *fptr;
    int c;
    ptr = fopen("Q3.txt", "r");
    fptr = fopen("Q3b.txt", "w");
    while ((c = fgetc(ptr)) != EOF)
    {
        fputc(c, fptr);
    }
    fputc('\n', fptr);
    fclose(ptr);


    ptr = fopen("Q3.txt", "r");
    while ((c = fgetc(ptr)) != EOF)
    {
        fputc(c, fptr);
    }
    fclose(ptr);
    fclose(fptr);
    return 0;
}