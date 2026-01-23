#include <stdio.h>
int occurence(char *st, char c) //Takes the input of a string and a character whose occurence is to be counted
{
    char *ptr = st; //pointer which points to the first element of the string
    int count = 0; //intializing count equal to 0
    while (*ptr != '\0') //Runs till i reaches \0
    {
        if (*ptr == c) //the pointer checks for the character
        {
            count++; //if found increase the count by 1
        }
        ptr++; //increase the pointers position so that it points to the next index when checked
    }
    return count; //return the final count after all the bhasad
}

int main()
{
    char st[] = "atharv";             // creating a string
    int count = occurence(st, 'a');   // A variable to store the number of occurences and also calls the function
    printf("Occurences = %d", count); // prints the value of variable which stores the number of occurences
    return 0;
}