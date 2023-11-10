//
// Created by zy337 on 2023/11/10.
//
#include <stdio.h>
long long Fib(int n);
int main()
{
    int n = 0;
    scanf_s("%d", &n);
    printf("Fib(%d) = %lld", n, Fib(n));
    return 0;
}
long long Fib(int n)
{
    if(n <= 1)
        return n;
    else
        return Fib(n - 1) + Fib(n - 2);
}