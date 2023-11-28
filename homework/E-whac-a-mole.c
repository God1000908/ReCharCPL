//
// Created by zy337 on 2023/11/21.
//
#include <stdio.h>
#include <math.h>
#define SIZE 750
int ch[SIZE][SIZE];
int x[SIZE * SIZE];
int y[SIZE * SIZE];
int d;
int count;
long long result = 0;
void compare(long long t, int i, int j)
{
    if (result < t) {
        result = t;
        count = 0;
    }
    if (result == t) {
        x[count] = i - d + 1;
        y[count] = j - d + 1;
        count++;
    }
}
int main()
{
    int n = 0;
    int m = 0;
    int time = 1;
    scanf("%d%d%d", &n, &m, &d);
    for (int x1 = d; x1 < n + d; ++x1) {
        for (int y1 = d; y1 < m + d; ++y1) {
            scanf("%d", &ch[x1][y1]);
        }
    }
    long long t = 0;
    for (int a = 0; a <= 2 * d; ++a) {
        for (int l = abs(a - d); l <= 2 * d - abs(a - d); ++l) {
            t += ch[a][l];
        }
    }
    result = t;
    int i = d;
    int j = d + 1;
    while(time < n * m) {
        if (i > d && j == d) {
            int t3 = i;
            int t4 = j;
            for (int k = -d; k <= d; ++k) {
                t = t + ch[t3 + k][t4 - abs(abs(k) - d)] - ch[t3 + k][t4 + 1 + abs(abs(k) - d)];
            }
            compare(t, t3, t4);
            time ++;
            i ++;
            t3 ++;
            if(time < n * m) {
                for (int k = -d; k <= d; ++k) {
                    t = t - ch[t3 - 1 - abs(abs(k) - d)][t4 + k] + ch[t3 + abs(abs(k) - d)][t4 + k];
                }
                compare(t, t3, t4);
                time++;
                j++;
            }
            continue;
        }
        if (j == d + m - 1) {
            int t3 = i;
            int t4 = j;
            for (int k = -d; k <= d; ++k) {
                t = t - ch[t3 + k][t4 - 1 - abs(abs(k) - d)] + ch[t3 + k][t4 + abs(abs(k) - d)];
            }
            compare(t, t3, t4);
            time ++;
            i ++;
            t3 ++;
            if(time < n * m) {
                for (int k = -d; k <= d; ++k) {
                    t = t - ch[t3 - 1 - abs(abs(k) - d)][t4 + k] + ch[t3 + abs(abs(k) - d)][t4 + k];
                }
                compare(t, t3, t4);
                time++;
                j--;
            }
            continue;
        }
        if (j > d && (i - d) % 2 == 0) {
            int t1 = j;
            int t2 = i;
            for (int k = -d; k <= d; ++k) {
                t = t - ch[t2 + k][t1 - 1 - abs(abs(k) - d)] + ch[t2 + k][t1 + abs(abs(k) - d)];
            }
            compare(t, t2, t1);
            time ++;
            j ++;
            continue;
        }
        if (j > d && (i - d) % 2 != 0) {
            int t1 = j;
            int t2 = i;
            for (int k = -d; k <= d; ++k) {
                t = t + ch[t2 + k][t1 - abs(abs(k) - d)] - ch[t2 + k][t1 + 1 + abs(abs(k) - d)];
            }
            compare(t, t2, t1);
            time ++;
            j --;
            continue;
        }
    }
    printf("%lld %d\n", result, count);
    for (int k = 0; k < count; ++k) {
        printf("%d %d\n", x[k], y[k]);
    }
    return 0;
}