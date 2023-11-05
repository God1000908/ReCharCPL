//
// Created by zy337 on 2023/11/5
#include <stdio.h>
long long plus(long long a, long long b)
{
    long long c = a + b;
    return c;
}
int main()
{
    long long a, b;
    scanf("%lld%lld", &a, &b);
    printf("%lld", plus(a, b));
}