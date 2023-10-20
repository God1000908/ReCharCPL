//
// Created by zy337 on 2023/10/19.
//
#include <stdio.h>
#include <math.h>
int main()
{
    int i, j;
    for (i = 100; i < 1000; i ++)
    {
        int x = i;
        int point2 = 0;
        int num[3] = { 0 };
        for(j = 2; j <= sqrt(i); j ++)
        {
            if(i % j == 0){
                break;
            }
        }
        if(j > sqrt(i))
        {
            for(int n = 0; n < 3; n ++)
            {
                num[n] = x % 10;
                x /= 10;
            }
            if((num[0] + num[1]) % 10 == num[2])
                point2 = 1;
        }
        if(point2 == 1)
            printf("%d\n", i);
    }
    return 0;
}