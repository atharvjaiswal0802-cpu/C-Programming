// Ye sare loops run ho rahe h prime numbers ke liye
// Aur composite numbers directly ek baar check hone par hi not prime print ho jayega
// #include <stdio.h>

// int main()
// {
//     int n;
//     int prime = 1;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for(int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             prime = 0;
//             break; //Taki jo numbers 2 se divisible ho vo directly not prime wali category me chala jaye
//         }
//     }
//     if (prime == 0 && n != 2)
//     {
//         printf("%d is not a prime number", n);
//     }
//     else
//     {
//         printf("%d is a prime number", n);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n, i = 2, prime = 1;
//     printf("Enter the number\n");
//     scanf("%d", &n);
//     do
//     {
//         if (n % i == 0)
//         {
//             prime = 0;
//             break;
//         }
//         else{
//             i++; //Taki jo number(say 5) divisible na ho usse incremented value se check kiya jaye
//         }
        
//     } while (i < n);
//     if (prime == 0 && n != 2)
//     {
//         printf("%d is not a prime number", n);
//     }
//     else{
//         printf("%d is a prime number", n);
//     }
//     return 0;
// }


#include <stdio.h>

int main() {
    int n, i = 2, prime = 1;
    printf("Enter the number\n");
    scanf("%d", &n);
    while (i < n)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
        else{
            i++; //Taki jo number(say 5) divisible na ho usse incremented value se check kiya jaye
        }
    }
    if (prime == 0 && n != 2)
    {
        printf("%d is not a prime number", n);
    }
    else{
        printf("%d is a prime number", n);
    }
    return 0;
}