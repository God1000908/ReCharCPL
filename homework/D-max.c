//
// Created by zy337 on 2023/11/14.
//
#include <stdio.h>
long long num[100005];
long long result[100005][2];
long long l(long long index, long long len)
{
    if(len < 0)
        return 1;
    if(num[index] < num[len])
        return len + 2;
    else
        return l(index, len - 1);
}
long long r(long long index, long long len, long long max)
{
    if(len == max)
        return max;
    if(num[index] < num[len])
        return len;
    else
        return r(index, len + 1, max);
}
int main()
{
    long long len = 0;
    scanf("%lld", &len);
    for (long long i = 0; i < len; ++i) {
        scanf("%lld", &num[i]);
    }
    for (long long i = 0; i < len; ++i) {
        result[i][0] = l(i, i - 1);
        result[i][1] = r(i, i + 1, len);
    }
    for (long long i = 0; i < len; ++i) {
        printf("%lld %lld\n", result[i][0], result[i][1]);
    }
}