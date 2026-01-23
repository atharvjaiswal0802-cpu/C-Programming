#include <stdio.h>

int main() {
    // 10 question using while loop
    // int n;
    // int prime = 1;
    // int i = 2;
    // printf("Enter a number: ");
    // scanf("%d", &n);

    // while (i < n)
    // {
    //     if (n % i == 0)
    //     {
    //         prime = 0;
    //         break;
    //     }
    //     i++;
    // }
    
    // if (prime == 0 && n != 2)
    // {
    //     printf("%d is not a prime number", n);
    // }
    // else
    // {
    //     printf("%d is a prime number", n);
    // }


    //10 question using do-while loop
    int n;
    int prime = 1;
    int i = 2;
    printf("Enter a number: ");
    scanf("%d", &n);

    do
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    } while (i < n);
    
    if (prime == 0 && n != 2)
    {
        printf("%d is not a prime number", n);
    }
    else
    {
        printf("%d is a prime number", n);
    }
    return 0;
}