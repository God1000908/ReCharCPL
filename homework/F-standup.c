//
// Created by zy337 on 2023/10/9.
//
#include <stdio.h>
int main()
{
    int n = 0;
    int f = 0;
    scanf("%d", &n);
    int numbers[1001];
    int compare[1001];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        count = count + numbers[i];
        compare[i] = i + 1 - count;
    }
    for(int i = 0; i < n; i++)
    {
        if(f<compare[i])
        {
            f = compare[i];
        }
    }
    printf("%d", f);
    return 0;
}