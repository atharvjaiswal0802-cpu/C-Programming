#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("This %d is a leap year\n", year);
    }

    else
    {
        printf("This %d is not a leap year\n", year);
    }

    return 0;
}