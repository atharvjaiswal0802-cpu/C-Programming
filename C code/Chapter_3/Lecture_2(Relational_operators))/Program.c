#include <stdio.h>

int main() {
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    if(age>90) {
        printf("You are above 90, you cannot drive a car\n");
    }

    else{
        printf("You can drive a car\n");
    }

    //if(age=50) //This is an assignment operator
    if(age==50) //This is an equality check operator
    {
        printf("Half century");
    }
    return 0;
}