//
// Created by zy337 on 2023/10/17.
//
#include <stdio.h>
int main()
{
    int N = 0, len = 0;
    long long result = 0;
    int point = 1;
    scanf("%d %d", &len, &N);
    char num[31];
    long long number[31];
    scanf("%31s", num);
    for(int i = 0; i < len; i ++)
    {
        if(num[i] == 'A')
            number[i] = 10;
        else if(num[i] == 'B')
            number[i] = 11;
        else if(num[i] == 'C')
            number[i] = 12;
        else if(num[i] == 'D')
            number[i] = 13;
        else if(num[i] == 'E')
            number[i] = 14;
        else if(num[i] == 'F')
            number[i] = 15;
        else
            number[i] = (int)num[i] - 48;
    }
    for(int i = 0; i < len; i ++)
    {
        if(number[i] > (N - 1)){
            point = 0;
            break;
        }
    }
    if(point == 0){
        printf("Error");
    }else{
        int digits = 1;
        for(int i = (len - 1); i >= 0; i --)
        {
            result = result + digits * number[i];
            digits *= N;
        }
        printf("%lld", result);
    }
    return 0;
}