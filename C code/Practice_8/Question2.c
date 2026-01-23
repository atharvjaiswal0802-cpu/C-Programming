#include <stdio.h>
#include <string.h>

int main() {
    char st1[30];
    char st2[30];
    char c;
    int i = 0;

    printf("Enter the value of first string\n");
    scanf("%s", st1);
    printf("Enter the value of second string character by character\n");

    while (c != '\n')
    {
        fflush(stdin);//This is used because when we press the enter key after entering the string for st1, the enter button becomes the input for st2
        scanf("%c", &c);
        st2[i] = c;
        i++;
    }
    st2[i - 1] = '\0';

    printf("The value of st1 is %s\n", st1);
    printf("The value of st2 is %s\n", st2);
    printf("strcmp for these strings returns %d", strcmp(st1, st2));

    return 0;
}