#include <stdio.h>
#include <stdlib.h>
typedef struct Time{

int hour;
int minute;
int second;
}time;

time hourtosecond(int Hour,int Minute,int Seconds){
time hour;

hour.hour=Hour;
hour.minute=Hour*60;
hour.second=hour.minute*60;
return hour;
}

time minuetosecond(int Hour,int Minute,int Seconds){
time minute;

minute.hour=0;
minute.minute=Minute;
minute.second=minute.minute*60;
return minute;
}

time secondtosecond(int Hour,int Minute,int Seconds){
time second;

second.hour=0;
second.minute=0;
second.second=Seconds;
return second;
}

int timeDifference(time t1, time t2){
    int totalSeconds1 = t1.hour * 3600 + t1.minute * 60 + t1.second;
    int totalSeconds2 = t2.hour * 3600 + t2.minute * 60 + t2.second;  

    return totalSeconds1 - totalSeconds2;
}
void compare(diff){
 if(diff<0){
        printf("time 2 is late\n");
        else if(diff>0){
            printf("time 1 is late");
            else
                printf("times are equal");
        }
    }
}

int main()
{

 Time hour1, minute1, second1, hour2, minute2, second2;

    hour1 = hourToSeconds(17);
    minute1 = minuteToSeconds(15);
    second1 = secondToSeconds(23);

    hour2 = hourToSeconds(20);
    minute2 = minuteToSeconds(10);
    second2 = secondToSeconds(40);
    Time time1 = {hour1.hours, minute1.minutes, second1.seconds};
    Time time2 = {hour2.hours, minute2.minutes, second2.seconds};


    int difference = timeDifference(hour2, hour1);
    printf("Time difference: %d seconds\n", difference);

    compare(difference);



    return 0;
}


