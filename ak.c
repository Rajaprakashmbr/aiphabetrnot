#include <stdio.h>

int calculateTimeDiff(int time1, int time2)
{
    int difference = time1 - time2;

    return difference;
}

void main()
{
    typedef struct
    {
        int hours;
        int minutes;
        int seconds; 
    } Time;

    Time firstTime;
    Time secondTime;

    printf("Time #1: ");
    gets(hours,minute,seconds);

    printf("Time #2: ");
  gets(hours,minute,seconds);

    // I understand that it will not work to separate the variables with a comma, but I am kind of stuck here
    int firstFullTime   =   firstTime.hours, firstTime.minutes, firstTime.seconds;
    int secondFullTime  =   secondTime.hours, secondTime.minutes, secondTime.seconds;

    calculateTimeDiff(firstFullTime, secondFullTime);

    return 0;
