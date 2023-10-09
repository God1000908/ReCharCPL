//
// Created by zy337 on 2023/10/8.
//
#include <stdio.h>
int main()
{
    int n = 0, sum = 0, numbers[10000] = { 0 }, a = 1, max;
    scanf("%d", &n);
    numbers[0] = n;
    for(int i = 0; n != 1; i++)
    {
        if((n % 2) == 0)
        {
            sum ++;
            n = n/2;
        }
        else
        {
            sum ++;
            n = 3 * n + 1;
        }
        numbers[a] = n;
        a++;
    }
    for(int i = 0; i < (sum + 1); i++)
    {
        if(max < numbers[i])
        {
            max = numbers[i];
        }
    }
    printf("%d %d", sum, max);
    return 0;
}