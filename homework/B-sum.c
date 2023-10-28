//
// Created by zy337 on 2023/10/27.
//
#include <stdio.h>
#include <math.h>
long long sm(int n, int t)
{
    int sum = 0;
    for(int i = 0; i < n; i ++)
    {
        sum = t * pow(10, i) + sum;
    }
    return sum;
}
int main()
{
    int t = 0;
    int n = 0;
    scanf("%d%d", &n, &t);
    long long sum = 0;
    for(int i = 1; i <= n; i ++)
    {

        long long digits = 0;
        digits = sm(i, t);
        sum = sum + digits;
    }
    printf("%lld", sum);
    return 0;
}