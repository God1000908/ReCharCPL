//
// Created by zy337 on 2023/9/22.
//
#include <stdio.h>
int main()
{
    int a, b, c, d, e, change;
    scanf("%d",&change);
    a = (int)change/50;
    b = (int)(change-50*a)/20;
    c = (int)(change-50*a-20*b)/10;
    d = (int)(change-50*a-20*b-10*c)/5;
    e = (change-50*a-20*b-10*c-5*d);
    printf("%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e);
    return 0;
}