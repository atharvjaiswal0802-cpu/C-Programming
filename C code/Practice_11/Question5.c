#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int num;
    printf("Enter the number: \n");
    scanf("%d", &num);
    ptr = (int *)malloc(10 * sizeof(int));
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n",num, i, num*i);
    }
    
    printf("Reallocated array is: \n");
    ptr = (int *)realloc(ptr, 15 * sizeof(int));
    for (int i = 1; i <= 15; i++)
    {
        printf("%d x %d = %d\n",num, i, num*i);
    }

    return 0;
}