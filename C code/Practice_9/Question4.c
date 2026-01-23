// #include <stdio.h>
// typedef struct empolyee{
//     int id;
// }emp;

// int main() {
//     emp e1;
//     e1.id = 101;
//     printf("%d", e1.id);
//     return 0;
// }

#include <stdio.h>
typedef struct empolyee{
    int id;
}emp;

int main() {
    emp e1;
    emp *ptr;
    ptr = &e1;
    ptr->id = 101;
    printf("%d", ptr->id);
    return 0;
}