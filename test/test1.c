//
// Created by zy337 on 2023/11/19.
//
#include <stdio.h>
#include <limits.h>
int a[105];
int b[105];
int find(int n)
{
    int min = INT_MAX;
    int index = 0;
    for (int i = 0; i < n; ++i) {
        if(min > a[i]) {
            min = a[i];
            index = i;
        }
    }
    a[index] = INT_MAX;
    return min;
}
int main()
{
    int M, N;
    int count = 0;
    scanf("%d %d", &M, &N);
    for (int i = 0; i < M; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < N; ++i) {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < M; ++i) {
        int t = find(M);
        int index = -1;
        for (int j = 0; j < N; ++j) {
            if(t <= b[j]){
                t = b[j];
                index = j;
            }
        }
        if(index != -1)
            b[index] = 0;
    }
    for (int i = 0; i < N; ++i) {
        if(b[i] == 0)
            count ++;
    }
    printf("%d", count);
    return 0;
}