#include <stdio.h>

int main() {
    // 5 question using for loop
    // int i;
    // int sum = 0;
    // int n;
    // printf("Enter the number\n");
    // scanf("%d", &n);

    // for (i = 0; i <= n; i++)
    // {
    //     sum += i;
    // }
    // printf("The sum of first %d natural numbers is %d\n", n, sum);


    
    // 5 question using do while loop
    int i = 0;
    int sum = 0;
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);

    do
    {
        sum += i;
        i++;
    } while (i <= n);
    printf("The sum of first %d natural numbers is %d\n", n, sum);

    return 0;
}