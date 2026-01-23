#include <stdio.h>

int main() {
    FILE *ptr;
    int num;
    ptr = fopen("Q5.txt", "r");
    fscanf(ptr, "%d", &num);
    ptr = fopen("Q5.txt", "w");
    fprintf(ptr, "%d", num+num);
    return 0;
}