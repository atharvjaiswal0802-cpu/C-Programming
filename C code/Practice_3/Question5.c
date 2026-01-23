#include <stdio.h>

int main() {
    char ch; 
    printf("Enter the character\n");
    scanf("%c", &ch);

    //97-122 -> a-z ASCII values used
    if(ch<=122 && ch>=97){
        printf("This character is a lowercase\n");
    }

    else{
        printf("This character is not a lowercase\n");
    }
    return 0;
}