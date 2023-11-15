//
// Created by zy337 on 2023/11/14.
//
#include <stdio.h>
#include <math.h>
int num[25];
int n, p;
double f(double i);
double v(double l, double r, double e);
int main()
{
    double result = 0;
    double l, r;
    scanf("%d%d", &n, &p);
    for (int i = 0; i <= n; ++i) {
        scanf("%d", &num[i]);
    }
    scanf("%lf%lf", &l, &r);
    result = v(l, r, 10e-4);
    printf("%lf", result);
    return 0;
}
double f(double i)
{
    double result = 0;
    for (int j = 0; j <= n; ++j) {
        result += (double)num[j] * pow(i, (double)j);
    }
    return pow(result, p);
}
double v(double l, double r, double e)
{
    double mid = (l + r) / 2.0;
    double S = (r - l) * (4 * f(mid) + f(l) + f(r)) / 6.0;
    double SL = (mid - l) * (4 * f((mid + l) / 2.0) + f(l) + f(mid)) / 6.0;
    double SR = (r - mid) * (4 * f((mid + r) / 2.0) + f(r) + f(mid)) / 6.0;
    if(fabs(SL + SR - S) < 15 * e)
        return SL + SR + (SL + SR - S) / 15.0;
    else{
        e /= 2.0;
        double left = v(l, mid, e);
        double right = v(mid, r, e);
        return left + right;
    }
}