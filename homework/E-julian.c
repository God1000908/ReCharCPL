//
// Created by zy337 on 2023/9/22.
//
#include <stdio.h>
int main()
{
    int year, month, day, a, y, m, JDN;
    scanf("%d %d %d",&year,&month,&day);
    a=(int)(14-month)/12;
    y=year+4800-a;
    m=month+12*a-3;
    JDN=day+(int)(153*m+2)/5+365*y+(int)y/4-(int)y/100+(int)y/400-32045;
    printf("%d",JDN);
    return 0;
}
