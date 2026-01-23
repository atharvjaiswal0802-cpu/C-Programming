#include <stdio.h>

typedef struct number {
    int real;
    int imag;
}num;

void display(num arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i].imag >= 0)
            printf("%d + %di\n", arr[i].real, arr[i].imag);
        else
            printf("%d - %di\n", arr[i].real, -arr[i].imag);
    }
}

int main() {
    num arr[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter real and imaginary parts of complex number %d:\n", i + 1);
        scanf("%d %d", &arr[i].real, &arr[i].imag);
    }

    printf("\nComplex numbers are:\n");
    display(arr, 5);

    return 0;
}