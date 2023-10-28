//
// Created by zy337 on 2023/10/27.
//
#include <stdio.h>
#include <math.h>
int change(int n, int m)
{
    int num[3] = { 0 };
    int count = 0;
    while(n != 0){
        num[count] = n % 10;
        n /= 10;
        count ++;
    }
    int rr = 0;
    for(int i = count - 1; i >= 0; i --)
    {
        rr = rr +  pow(m, i) * num[i];
    }
    return rr;
}
int judge(int n, int m)
{
    int num[3] = { 0 };
    int count = 0;
    while(n != 0){
        num[count] = n % 10;
        n /= 10;
        count ++;
    }
    for(int i = count - 1; i >= 0; i --)
    {
        if(num[i] >= m)
            return 0;
    }
    return 1;
}
int a, b, sum;
int main()
{
    int i = 2;
    int point;
    scanf("%d%d%d", &a, &b, &sum);
    for(i = 2;i < 100;i ++)
    {
        point = 0;
        if(change(a, i) * change(b , i) == change(sum , i)){
            if(judge(a, i)&&judge(b, i)&&judge(sum, i)) {
                point = 1;
                break;
            }else{
                point = 0;
            }
        }
    }
    if(point == 1)
        printf("%d", i);
    else
        printf("0");
    return 0;
}