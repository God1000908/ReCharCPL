//
// Created by zy337 on 2023/10/27.
//
#include <stdio.h>
#include <math.h>
int prime(int n)
{
    for(int j = 2; j <= sqrt(n); j ++)
    {
        if(n % j == 0)
            return 0;
    }
    return 1;
}
int rev(int n)
{
    int num[5] = { 0 };
    int count = 0;
    while(n != 0){
        num[count] = n % 10;
        n /= 10;
        count ++;
    }
    int rr = 0;
    for(int i = count - 1; i >= 0; i --)
    {
        rr = rr +  pow(10, i) * num[count - 1 - i];
    }
    return rr;
}
int main()
{
    int n = 0;
    int k = 0;
    scanf("%d", &n);
    for(int i = 2; i <= n; i ++)
    {
        int a = 1;
        int b = 1;
        int rr = rev(i);
        a = prime(i);
        b = prime(rr);
        if(a&&b)
            k ++;
    }
    printf("%d", k);
}