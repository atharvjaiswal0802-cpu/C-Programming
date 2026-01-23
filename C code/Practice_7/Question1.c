#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr;
    ptr = &arr[0];
    printf("The value at %d index is: %d\n", *(ptr+2-1), *(ptr+2)); 
    printf("The value at 0 index is: %d\n", *(ptr)); 
    return 0;
}