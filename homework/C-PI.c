//
// Created by zy337 on 2023/9/22.
//
#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    c = (double)1/239;
    a = (double)(log(pow(6403.2,3)+7.44e-4)+log(1000000))/ sqrt(163);
    b = (double)4.0*(4*atan(0.2)-atan(c));
    printf("%.15lf\n%.15lf",a,b);
    return 0;
}
