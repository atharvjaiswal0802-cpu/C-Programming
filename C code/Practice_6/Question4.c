#include <stdio.h>
void SumandAvg(int x, int y, int *sum, float *avg){
    *sum = x + y;
    *avg = (float)*sum / 2;
}

int main() {
    int c, d, Sum;
    float Avg;
    c = 4, d = 7;
    SumandAvg(c, d, &Sum, &Avg);
    printf("The value of sum is %d\n", Sum);
    printf("The value of average is %f\n", Avg);
    return 0;
}