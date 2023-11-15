//
// Created by zy337 on 2023/11/13.
//
#include <stdio.h>
long long fun(int n, int k)
{
    if(n == k)
        return 1;
    if(k == 1)
        return n;
    else
        return fun(n - 1, k - 1) + fun(n - 1, k);
}
int main()
{
    int n = 0;
    int k = 0;
    scanf("%d%d", &n, &k);
    long long result = 0;
    result = fun(n - 1, k - 1);
    printf("%lld", result);
    return 0;
}