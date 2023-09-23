//
// Created by zy337 on 2023/9/22.
//
#include <stdio.h>
int main()
{
    const double G=6.674e-11;
    const double M=77.15;
    double m, R;
    scanf("%lf %lf",&m,&R);
    double N=(G*M*m)/(R*R);
    printf("%.3e",N);
    return 0;
}