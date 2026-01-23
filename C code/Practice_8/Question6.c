#include <stdio.h>
void encrypt(char *c){
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

int main() {
    char c[] = "Atharv";
    encrypt(c);
    printf("Encrypted string becomes: %s", c);
    return 0;
}
// Atharv - Buibsw