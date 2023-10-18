#include <stdio.h>
int find(int n, int k)
{
    if (n == 1) {
        return 1;
    } else {
        return (find(n - 1, k) + k - 1) % n + 1;
    }
}
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int survivor = find(n, k);
    printf("%d\n", survivor);
    return 0;
}