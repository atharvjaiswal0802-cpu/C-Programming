#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char user;
    printf("Choose between rock, paper and scissors");
    scanf("%s", &user);
    const char *choices[] = {"Rock", "Paper", "Scissors"};

    srand(time(NULL));

    int randomChoice = rand() % 3;
    // printf("%s\n", choices[randomChoice]);
    if(randomChoice == "Rock" && user = "paper"){
    }

    return 0;
}