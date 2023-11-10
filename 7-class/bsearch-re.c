//
// Created by zy337 on 2023/11/10.
//
#include <stdio.h>
int bsearch(int a, int b);
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d%d", &a, &b);
    int result = bsearch(a, b);
    printf("gcd(%d, %d) = %d", a, b, result);
    return 0;
}
int bsearch(int a, int b)
{
    if(b == 0)
        return a;
    return bsearch(b, a % b);
}