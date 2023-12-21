// Created by zy337 on 2023/12/20.
//
#include <stdio.h>
int num[1000005];
int main()
{
    int n = 0;
    int q = 0;
    scanf("%d%d", &n, &q);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &num[i]);
    }
    while(q --){
        int r = 0;
        int l = n - 1;
        int index = -1;
        int key = (r + l) / 2;
        int find = 0;
        scanf("%d", &find);
        while(r <= l){
            if(num[key] == find){
                index = key;
                break;
            }else if(num[key] < find){
                r = key + 1;
            }else if(num[key] > find){
                l = key - 1;
            }
            key = (r + l) / 2;
        }
        printf("%d\n", index);
    }
    return 0;
}