#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int *ptr;
    ptr = (int *)calloc(num, sizeof(int));
    for (int i = 0; i < num; i++)
    {
        printf("%d", ptr[i]);
    }
    
    return 0;
}