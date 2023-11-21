//
// Created by zy337 on 2023/11/17.
//
#include <stdio.h>
int a[10005];
int b[10005];
int find2(int len)
{
    int max = 0;
    int index = 0;
    for (int i = 0; i < len; ++i) {
        if(max < a[i]) {
            max = a[i];
            index = i;
        }
    }
    return b[index];
}
int find1(int len)
{
    int max = 0;
    int index = 0;
    for (int i = 0; i < len; ++i) {
        if(max < a[i]) {
            max = a[i];
            index = i;
        }
    }
    a[index] = 0;
    return max;
}
int main()
{
    int n, L;
    scanf("%d%d", &n, &L);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; ++i) {
        scanf("%d", &b[i]);
    }
    int money = 0;
    while(L > 0){
        int t2 = find2(n);
        int t1 = find1(n);
        if(L - t2 >= 0){
            money += t1 * t2;
            L -= t2;
        }else {
            money += L * t1;
            L = 0;
        }
    }
    printf("%d ", money);
    return 0;
}