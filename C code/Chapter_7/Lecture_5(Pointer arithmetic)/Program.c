#include <stdio.h>

int main() {
    // int a = 34;
    // int *ptr = &a;
    // printf("The value of ptr is %u\n", ptr);
    // ptr++; //This add 4 bytes to the address number of stored in ptr
    // printf("The value of ptr is %u\n", ptr);
    // ptr--; //This substract 4 bytes to the address number of stored in ptr
    // printf("The value of ptr is %u\n", ptr);
    //Since the integer occupies 4 bytes
    
    // char c = "a";
    // char*ptr = &c;
    // printf("The value of ptr is %u\n", ptr);
    // ptr++; //This add 1 bytes to the address number of stored in ptr
    // printf("The value of ptr is %u\n", ptr);
    // ptr--; //This substract 1 bytes to the address number of stored in ptr
    // printf("The value of ptr is %u\n", ptr);
    // //Since the character occupies 1 bytes

    float a = 3.4;
    float *ptr = &a;
    printf("The value of ptr is %u\n", ptr);
    ptr++; //This add 4 bytes to the address number of stored in ptr
    printf("The value of ptr is %u\n", ptr);
    ptr--; //This substract 4 bytes to the address number of stored in ptr
    printf("The value of ptr is %u\n", ptr);
    //Since the float occupies 4 bytes
    return 0;
}