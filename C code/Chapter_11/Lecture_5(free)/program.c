#include <stdio.h>
#include <stdlib.h>

//This is used to delete the large amount of free allocated memory
int main() {
    int *ptr;
    int *ptr2;
    ptr = (int *)malloc(600 * sizeof(int));
    for (int i = 0; i < 600; i++)
    {
        printf("Enter the value of %d element: \n", i+1);
        scanf("%d", &ptr[i]);
        ptr2 = (int *)malloc(60000 * sizeof(int)); //This will continuously request large memory
        free(ptr2); //This will continously free the large amount of allocated memory
    }
    
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is; %d\n", i+1 , ptr[i]);
    }
    
    return 0;
}