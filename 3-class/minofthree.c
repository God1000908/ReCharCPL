//
// Created by zy337 on 2023/10/8.
//
#include <stdio.h>
int main()
{
    int a = 0, b = 0, c =0;
    scanf("%d%d%d",&a, &b, &c);
    int min = 0;
    if(a > b)
    {
        if(b > c)
        {
            min = c;
        }
        else
        {
            min = b;
        }
    }
    else
    {
        if(a < c)
        {
            min = a;
        }
        else
        {
            min = c;
        }
    }
    printf("min(%d, %d, %d) = %d",a,b,c,min);1
    return 0;
}