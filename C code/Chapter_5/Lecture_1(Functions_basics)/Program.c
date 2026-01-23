// #include <stdio.h>

//     void mor() {
//         printf("Good Morning\n");
//     }

//     void after() {
//         printf("Good Afternoon\n");
//     }

//     void ni() {
//         printf("Good Night\n");
//     }

// int main() {
//     mor();
//     after();
//     ni();
//     return 0;
// }


//Calling a function in another function
#include <stdio.h>

    void mor() {
        printf("Good Morning\n");
        after();
    }

    void after() {
        printf("Good Afternoon\n");
        ni();
    }

    void ni() {
        printf("Good Night\n");
    }

int main()
{
    mor();
    return 0;
}