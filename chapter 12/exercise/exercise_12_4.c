#include <stdio.h>

typedef struct {
    int hours;
    int minutes;
    int seconds;
} Time;

Time addTimes(Time t1, Time t2) {
    Time sum;
    sum.seconds = t1.seconds + t2.seconds;
    sum.minutes = t1.minutes + t2.minutes + sum.seconds / 60;
    sum.seconds %= 60;
    sum.hours = t1.hours + t2.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

int main() {
    Time t1 = {3, 45, 50}, t2 = {2, 20, 30};
    Time result = addTimes(t1, t2);
    printf("Sum of times: %02d:%02d:%02d\n", result.hours, result.minutes, result.seconds);
    return 0;
}
