//
// Created by zy337 on 2023/9/22.
//
#include <stdio.h>
int main()
{
    char month[10], weekday[10];
    unsigned year, day, hour, minute, second;
    scanf("%s %d %d %s %d %d %d",month,&day,&year,weekday,&hour,&minute,&second);
    printf("%.3s %.3s %d %.2d:%.2d:%.2d %.4d",weekday,month,day,hour,minute,second,year);
    return 0;
}
