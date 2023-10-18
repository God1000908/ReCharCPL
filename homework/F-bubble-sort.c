//
// Created by zy337 on 2023/10/14.
//
#include <stdio.h>
long long point[100005] = { 0 };
long long num[100005] = { 0 };
int main()
{
    int n = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i ++)
    {
        long long T = 0;
        long long max = 0;
        scanf("%lld", &T);
        for(int j = 0; j < T; j ++)
        {
            scanf("%lld", &num[j]);
        }
        for(int j = 0; j < T; j ++) {
            if (max < num[j]) {
                max = num[j];
            }
        }
        if(max == num[T - 1])
            point[i] = 1;
        else
            point[i] = 0;
    }
    for(int i = 0; i < n; i ++) {
        if (point[i] == 0)
            printf("No\n");
        else if (point[i] == 1)
            printf("Yes\n");
    }
    return 0;
}
