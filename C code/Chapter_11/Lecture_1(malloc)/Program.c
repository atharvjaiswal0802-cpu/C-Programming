#include <stdio.h>
#include <stdlib.h>

//The memory allocated with malloc is empty it does not contain any element
int main() {
    int *ptr;
    //Sizeof operator in C
    // printf("The size of int in a my pc is: %d\n", sizeof(int));
    // printf("The size of int in a my pc is: %d\n", sizeof(char));
    // printf("The size of int in a my pc is: %d\n", sizeof(float));
    ptr = (int *)malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element: \n", i+1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is: %d\n", i+1, ptr[i]);
    }
    return 0;
}