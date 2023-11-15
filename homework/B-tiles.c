//
// Created by zy337 on 2023/11/13.
//
#include <stdio.h>
int tile(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return tile(n - 1) + tile(n - 2);
}
int main() {
    int n;
    scanf("%d", &n);
    int ways = tile(n);
    printf("%d\n", ways);
    return 0;
}