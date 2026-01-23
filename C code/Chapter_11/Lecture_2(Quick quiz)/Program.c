#include <stdio.h>
#include <stdlib.h>

int main() {
    float *ptr;
    //Sizeof operator in C
    // printf("The size of int in a my pc is: %d\n", sizeof(int));
    // printf("The size of int in a my pc is: %d\n", sizeof(char));
    // printf("The size of int in a my pc is: %d\n", sizeof(float));
    ptr = (float *)malloc(6 * sizeof(float));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element: \n", i+1);
        scanf("%f", &ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is: %.2f\n", i+1, ptr[i]);
    }
    return 0;
}