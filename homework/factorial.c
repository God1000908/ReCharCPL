#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int MOD = 10007;
    long long sum = 0;
    long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial = (factorial * i) % MOD;
        sum = (sum + factorial) % MOD;
    }
    printf("%lld\n", sum);
    return 0;
}
