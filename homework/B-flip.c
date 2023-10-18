//
// Created by zy337 on 2023/10/14.
//
#include <stdio.h>
int main()
{
    int num[2005] = { 0 };
    int n = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++) {
            if (j % i == 0 && num[j - 1] == 0) {
                num[j - 1] = 1;
            } else if (j % i == 0 && num[j - 1] == 1) {
                num[j - 1] = 0;
            }
        }
    }
    for(int i = 0; i < n; i ++)
    {
        int index = 0;
        if(num[i] == 1)
        {
            index = i + 1;
            printf("%d ", index);
        }
    }
    return 0;
}