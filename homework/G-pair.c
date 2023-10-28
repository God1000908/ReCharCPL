//
// Created by zy337 on 2023/10/27.
//
#include <stdio.h>
long long a[1000000] = {};
long long b[1000000] = {};
int main() {
    long long n = 0;
    long long m = 0;
    long long t = 0;
    scanf("%lld%lld%lld", &n, &m, &t);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    for (int i = 0; i < m; i++) {
        scanf("%lld", &b[i]);
    }
    long long min_diff = 10000000000000;
    for (int j = 0; j < m; j++)
    {
        long long left = 0;
        long long right = n - 1;
        while (left <= right) {
            long long mid = (right + left) / 2;
            if (a[mid] <= t - b[j]) {
                long long diff = t - b[j] - a[mid];
                if (diff < min_diff) {
                    min_diff = diff;
                }
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }
    if (min_diff == 10000000000000||min_diff < 0) {
        printf("-1\n");
    } else {
        printf("%lld\n", min_diff);
    }
    return 0;
}