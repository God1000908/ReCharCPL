//
// Created by zy337 on 2023/11/21.
//
#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>
#define SIZE 750
int ch[SIZE][SIZE];
int x[SIZE];
int y[SIZE];
int d;
long long sum(int i, int j)
{
    long long sum = 0;
    for (int k = i - d; k <= i + d; ++k) {
        for (int l = j - d + abs(k - i); l <= j + d - abs(k - i); ++l) {
            sum += ch[k][l];
        }
    }
    return sum;
}
int main()
{
    int n = 0;
    int m = 0;
    int count = 0;
    long long result = LLONG_MIN;
    scanf("%d%d%d", &n, &m, &d);
    for (int i = d; i < n + d; ++i) {
        for (int j = d; j < m + d; ++j) {
            scanf("%d", &ch[i][j]);
        }
    }
    for (int i = d; i < n + d; ++i) {
        for (int j = d; j < m + d; ++j) {
            long long t = sum(i, j);
            if(result < t){
                result = t;
                count = 0;
            }
            if(result == t){
                x[count] = i - d + 1;
                y[count] = j - d + 1;
                count ++;
            }
        }
    }
    printf("%lld %d\n", result, count);
    for (int i = 0; i < count; ++i) {
        printf("%d %d\n", x[i], y[i]);
    }
    return 0;
}