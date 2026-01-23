#include <stdio.h>

int main() {
    char name1[50], name2[50];
    int salary1, salary2;
    printf("Enter the name of emp1 and emp2: \n");
    scanf("%s %s", name1, name2);
    printf("Enter the salary of emp1 and emp2: \n");
    scanf("%d %d", &salary1, &salary2);

    FILE *ptr;
    ptr = fopen("Q4.txt", "w");
    fprintf(ptr, "The details of the emp1 are: %s, %d\n", name1, salary1);
    fprintf(ptr, "The details of the emp2 are: %s, %d\n", name2, salary2);
    fclose(ptr);
    return 0;
}