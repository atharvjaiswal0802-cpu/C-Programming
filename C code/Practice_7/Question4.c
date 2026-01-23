#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("%d * %d = %d\n", n, i+1, n * (i+1));
    }
    return 0;
}