#include <stdio.h>

int main() {
    int age;

    printf("Enter your age\n");
    scanf("%d", &age);

    //if((age<=80 && age>=18)
    // if(age>18 || age==18) 
    // if(age!=41)
    if(age>=18){
        printf("You can drive a car\n");
    }

    else{
        printf("You cannot drive a car\n");
    }

    return 0;
}