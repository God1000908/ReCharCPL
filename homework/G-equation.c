//
// Created by zy337 on 2023/9/22.
//
#include <stdio.h>
#include <math.h>
int main()
{
    int p, q;
    do {
        scanf("%d %d",&p,&q);
    }while(pow(p/3.0,3)+pow(q/2.0,2)<0);
    double delta=sqrt(pow(q/2.0,2)+pow(p/3.0,3));
    if(-q/2.0-delta>=0&&-q/2.0+delta>=0)
    {
        double x1=pow((-q/2.0+delta),1/3.0)+pow((-q/2.0-delta),1/3.0);
        printf("%.3lf",x1);
    }
    else if(-q/2.0-delta<0&&-q/2.0+delta>=0)
    {
        double x1 = pow((-q / 2.0 + delta), 1 / 3.0) - pow((q / 2.0 + delta), 1 / 3.0);
        printf("%.3lf",x1);
    }
    else
    {
        double x1 =-pow((q / 2.0 - delta), 1 / 3.0) - pow((q / 2.0 + delta), 1 / 3.0);
        printf("%.3lf", x1);
    }
    return 0;
}
