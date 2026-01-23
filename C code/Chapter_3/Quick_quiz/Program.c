#include <stdio.h>

int main() {
    int marks;
    printf("Enter the marks\n");
    scanf("%d", &marks);

    if(marks<=100 && marks>=90) {
        printf("Your grades is A\n");
    }

    else if(marks<=90 && marks>=80) {
        printf("Your grades is B\n");
    }

    else if(marks<=80 && marks>=70) {
        printf("Your grades is C\n");
    }

    else if(marks<=70 && marks>=60) {
        printf("Your grades is D\n");
    }

    else if(marks<=70 && marks>=30) {
        printf("Your grades is F\n");
    }

    else if(marks<30) {
        printf("You are fail");
    }

    else{
        printf("Invalid marks");
    }
    return 0;
}