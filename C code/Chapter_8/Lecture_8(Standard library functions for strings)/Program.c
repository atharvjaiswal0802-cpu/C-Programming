#include <stdio.h>
#include <string.h>

int main()
{
    // strlen - It provides the length of string EXCLUDING the NULL CHARACTER
    //  char *st = "Atharv";
    //  int a = strlen(st);
    //  printf("The length of string st is: %d", a);

    // strcpy - Copy the function of 1st string into 2nd string
     char *st1 = "Atharv";
     char st2[30];
     strcpy(st2, st1);
     printf("Now st2 becomes: %s", st2);

    // strcat - This function concatenate 2 strings and print it in the 1st string
    //  char st1[30] = "Hello";
    //  char *st2 = "Atharv";
    //  strcat(st1, st2);
    //  printf("Now string st1 becomes: %s", st1);

    // strcmp - This function is used to compare two strings
//     char st1[30] = "Atharv";
//     char *st2 = "Ananya";
//     int val = strcmp(st1, st2);
//     printf("The value of val is: %d", val); // Since first letter 'A' is same no probs, but since 't' comes after 'n' therefore the value of val becomes 1
    return 0;
}