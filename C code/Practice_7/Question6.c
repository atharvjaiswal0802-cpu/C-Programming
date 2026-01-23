#include <stdio.h>
void check(int *arr, int n, int *p, int *ne){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
           (*p)++;
        }
        else{
            (*ne)++;
        }
    }
}

int main() {
    int posi = 0;
    int nega = 0;
    int arr[] = {1, -23, 45, 232, -34, -23, 56, 6};
    check(arr, 8, &posi, &nega);
    printf("Number of positive integers are: %d\n", posi);
    printf("Number of negative integers are: %d\n", nega);
    return 0;
}
