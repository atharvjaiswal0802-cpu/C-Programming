#include <stdio.h>

typedef struct time{
    int hours;
    int minutes;
    int seconds;
}time;

void display(time t){
    printf("The time is: %d:%d:%d\n", t.hours, t.minutes, t.seconds);
}

int timeComp(time t1, time t2){
    if(t1.hours > t2.hours){
        return 1;
    }

    if(t1.hours < t2.hours){
        return -1;
    }

    if(t1.minutes > t2.minutes){
        return 1;
    }

    if(t1.minutes < t2.minutes){
        return -1;
    }

    if(t1.seconds > t2.seconds){
        return 1;
    }

    if(t1.seconds < t2.seconds){
        return -1;
    }

    return 0;
}

int main() {
    time t1 = {5, 30, 34};
    time t2 = {5, 4, 22};
    display(t1);
    display(t2);
    int a = timeComp(t1,t2);
    printf("Time comparison function returns: %d", a);
    return 0;
}