//
// Created by zy337 on 2023/10/14.
//
#include <stdio.h>
int main()
{
    char num[2005] = {0};
    int n = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i ++)
    {
        scanf(" %c", &num[i]);
    }
    for(int i = 0; i <= (n - 1)/2; i ++)
    {
        if(num[i] != num[n - 1 - i]){
            if(num[i] == '?')
                num [i] = num[n - 1 - i];
            else if(num[n - 1 - i] == '?')
                num[n - 1 - i] = num[i];
        }
    }
    for(int i = 0; i < n; i ++)
    {
        printf("%c", num[i]);
    }
    return 0;
}