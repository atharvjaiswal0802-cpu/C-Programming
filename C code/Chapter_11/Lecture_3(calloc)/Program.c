#include <stdio.h>
#include <stdlib.h>

int main() {
    // Calloc is also used for memory allocation but this time the memory blocks are automatically filled with 0's
    int *ptr;
    ptr = (int *)calloc(6, sizeof(int));
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("Enter the value of %d element: \n", i+1);
    //     scanf("%d", &ptr[i]);
    // }    

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is: %d\n", i+1, ptr[i]);
    }
    return 0;
}