//
// Created by zy337 on 2023/10/8.
//
#include <stdio.h>
int main()
{
    int a = 0, b = 0;
    scanf("%d %d",&a,&b);
    int min = 0;
    //min = a < b ? a : b;
    if (a < b)
    {
        min = a;
    }
    else
    {
        min = b;
    }
    printf("min(%d,%d) = %d\n",a,b,min);
    return 0;
}
