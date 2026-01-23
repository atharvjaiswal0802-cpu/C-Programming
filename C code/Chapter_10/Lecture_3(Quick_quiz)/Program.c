#include <stdio.h>

int main() {
    FILE *ptr;
    int num1;
    int num2;
    ptr = fopen("sample1.txt", "r");
    if(ptr == NULL){
        printf("This file does not exist");
    }
    else{
    fscanf(ptr, "%d", &num1);
    fscanf(ptr, "%d", &num2);
    printf("The value of number 1 is: %d\n", num1);
    fclose(ptr);
    printf("The value of number 2 is: %d\n", num2);
    }
    return 0;
}