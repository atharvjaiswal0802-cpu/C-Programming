#include <stdio.h>
int strlen(char *st){
    char *ptr = st;
    int len = 0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    // for (char *ptr = st; *ptr != '\0'; *ptr++)
    // {
    //     len++;
    // }
    return len;
}

int main() {
    char st[] = "Atharv";
    int l = strlen(st);
    printf("The length of this string is %d\n", l);
    return 0;
}