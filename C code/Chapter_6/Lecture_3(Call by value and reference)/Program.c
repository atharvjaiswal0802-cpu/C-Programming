// Call by value in C
// #include <stdio.h>
// int sum(int x, int y){
//    int c;
//     c = x + y;
//     x = 34444;
//     y = 78787;
//    return c;
// }

// int main() {
//     int a = 4, b = 7;
//     printf("The value of a is %d and b is %d\n", a, b);
//     printf("Sum of 4 + 7 is %d\n", sum(a, b));
//     printf("The value of a is %d and b is %d after the function calls", a, b);
//     return 0;
// }



//Call by reference in C
#include <stdio.h>
void wrong_swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 4, b = 5;
    printf("Using Call by value\n");
    printf("The value of a is %d and b is %d before swap\n", a, b);
    wrong_swap(a, b); //will not work due to call by value
    printf("The value of a is %d and b is %d after swap\n\n", a, b);
    
    
    printf("Using Call by reference\n");
    printf("The value of a is %d and b is %d before swap\n", a, b);
    swap(&a, &b); //will work due to call by reference
    printf("The value of a is %d and b is %d after swap\n", a, b);
    return 0;
}