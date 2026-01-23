#include <stdio.h>
#include <string.h>
typedef struct bank{
    int accnum;
    char name[30];
    int balance;
    int year;
}bnk;

int main() {
    bnk e1;
    strcpy(e1.name, "Atharv");
    e1.balance = 120000;
    e1.year = 2002;
    printf("Enter the Bank Account Number: ");
    scanf("%d", &e1.accnum);

    printf("The customers details are as follows:\n");
    printf("Customers name is: %s\n", e1.name);
    printf("Your acccount number is: %d\n", e1.accnum);
    printf("Your balance is: %d\n", e1.balance);
    printf("Your year of opening the account is: %d\n", e1.year);
    return 0;
}