//
// Created by zy337 on 2023/11/13.
//
#include <stdio.h>
int num[10005];
int poi(int n)
{
    if(num[n - 1] == n)
        return n;
    else
        return poi(num[n - 1]);
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &num[i]);
    }
    for (int i = 1; i <= n; ++i) {
        num[i - 1] = poi(i);
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ", num[i]);
    }
    return 0;
}