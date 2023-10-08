//
// Created by zy337 on 2023/10/8.
//
#include <stdio.h>
int main()
{
    int year = 0;
    scanf("%d",&year);
    //bool variable
    int leap = 0;
    if(year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
            {
                leap = 1;
            }
            else
            {
                leap = 0;
            }
        }
        else
        {
            leap = 1;
        }
    }
    else
    {
        leap = 0;
    }
    if(leap == 0)
    {
        printf("%d is a common year",year);
    }
    else
    {
        printf("%d is a leap year",year);
    }
    return 0;
}