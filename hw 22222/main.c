#include <stdio.h>
#include <stdlib.h>

typedef struct Time {
    int hour;
    int minute;
    int second;
} Time;

Time hourtosecond(int Hour) {
    Time hour;
    hour.hour = Hour;
    hour.minute = Hour * 60;
    hour.second = hour.minute * 60;
    return hour;
}

Time minuetosecond(int Minute) {
    Time minute;
    minute.hour = 0;
    minute.minute = Minute;
    minute.second = minute.minute * 60;
    return minute;
}

Time secondtosecond(int Seconds) {
    Time second;
    second.hour = 0;
    second.minute = 0;
    second.second = Seconds;
    return second;
}

int timeDifference(Time t1, Time t2) {
    int totalSeconds1 = t1.hour * 3600 + t1.minute * 60 + t1.second;
    int totalSeconds2 = t2.hour * 3600 + t2.minute * 60 + t2.second;
    return totalSeconds1 - totalSeconds2;
}

void compare(int diff) {
    if (diff < 0) {
        printf("Time 2 is late\n");
    } else if (diff > 0) {
        printf("Time 1 is late\n");
    } else {
        printf("Times are equal\n");
    }
}

int main() {
    Time hour1 = hourtosecond(17);
    Time minute1 = minuetosecond(15);
    Time second1 = secondtosecond(23);

    Time hour2 = hourtosecond(15);
    Time minute2 = minuetosecond(10);
    Time second2 = secondtosecond(40);

    Time time1 = {hour1.hour, minute1.minute, second1.second};
    Time time2 = {hour2.hour, minute2.minute, second2.second};

    int difference = timeDifference(time1, time2);
    printf("Time difference: %d seconds\n", difference);

    compare(difference);

    return 0;
}
