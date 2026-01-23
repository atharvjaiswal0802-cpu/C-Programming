#include <stdio.h>
#include <string.h>

struct employee
{
   int code;
   float salary;
   char name[20];
};

int main()
{
   struct employee facebook[100];
   facebook[0].code = 100;
   facebook[0].salary = 34.56;
   strcpy(facebook[0].name, "John");

   facebook[1].code = 101;
   facebook[1].salary = 45.78;
   strcpy(facebook[1].name, "Jane");

   facebook[2].code = 102;
   facebook[2].salary = 78.56;
   strcpy(facebook[2].name, "Annie");
   printf("Done!\n");
   return 0;
}