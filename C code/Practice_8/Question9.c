#include <stdio.h>
void occurence(char *st, char c){
    char *ptr = st;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            printf("Yes this character is present in the string\n");
            break;
        }
        else{
            printf("No this character is present in the string\n");
            break;
        }
        ptr++;
    }
}

int main()
{
    char st[] = "Atharv";
    occurence(st, 'y');
}