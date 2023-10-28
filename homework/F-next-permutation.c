//
// Created by zy337 on 2023/10/27.
//
#include <stdio.h>
int n;
int num[2005] = {};
int main()
{
    int count = 1;
    scanf("%d", &n);
    for(int i = 0; i < n; i ++)
    {
        scanf("%d", &num[i]);
    }
    int index = n - 1;
    for(int i = n - 1; i > 1; i --)
    {
        if(num[i - 1] > num[i]) {
            count ++;
            index = i - 1;
        }
        else
            break;
    }
    for(int i = n - 1; i >= index; i --)
    {
        int temp = 0;
        if(num[index - 1] < num[i]){
            temp = num[index - 1];
            num[index - 1] = num[i];
            num[i] = temp;
            break;
        }
    }
    for(int i = n - 1, j = n - count;i > j; i --, j ++)
    {
        int temp = 0;
        temp = num[i];
        num[i] = num[j];
        num[j] = temp;
    }
    for(int i = 0; i < n; i ++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}