#include <stdio.h>

int main()
{
    int i = 34;
    int *j = &i; //*j will now store the value(i)
    // And j will now store the address(*i)
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The address of i is %u\n", &i);
    printf("The address of i is %u\n", j);


    printf("The address of j is %u\n", &j);
    printf("The value of j is %d\n", (*j));


    int **k = &j;
    printf("The value of k is %u\n", k);
    printf("The address of j is %u\n", &j);
    printf("The address stored in k is %d\n", *k);
    return 0;
}