//
// Created by zy337 on 2023/10/8.
//
#include <stdio.h>
#include <math.h>
int main()
{
    int n = 0;
    long double x = 0, in = 0, ff = 0;
    scanf("%Lf %d", &x, &n);
    for(int i = 0; i <= n; i++)
    {
        in = in + (pow(-1.0, i)*pow(x, (2 * i + 1.0)))/(2 * i + 1.0);
    }
    ff = 4.0 * in;
    printf("%.10Lf", ff);
    return 0;
}