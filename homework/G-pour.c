//
// Created by zy337 on 2023/11/21.
//
#include <stdio.h>
#include <stdbool.h>
int min(int a, int b)
{
    return (a < b) ? a : b;
}
bool pour(int a, int b, int c, int a0, int b0, int c0, int k, int VA, int VB, int VC) {
    if (a == a0 && b == b0 && c == c0) {
        return 1;
    }
    if (k == 0) {
        return 0;
    }
    int pourAtoB = min(a, VB - b);
    if (pourAtoB > 0 && pour(0, b + pourAtoB, c, a0, b0, c0, k - 1, VA, VB, VC)) {
        return 1;
    }
    int pourAtoC = min(a, VC - c);
    if (pourAtoC > 0 && pour(0, b, c + pourAtoC, a0, b0, c0, k - 1, VA, VB, VC)) {
        return 1;
    }
    int pourBtoA = min(b, VA - a);
    if (pourBtoA > 0 && pour(a + pourBtoA, 0, c, a0, b0, c0, k - 1, VA, VB, VC)) {
        return 1;
    }
    int pourBtoC = min(b, VC - c);
    if (pourBtoC > 0 && pour(a, 0, c + pourBtoC, a0, b0, c0, k - 1, VA, VB, VC)) {
        return 1;
    }
    int pourCtoA = min(c, VA - a);
    if (pourCtoA > 0 && pour(a + pourCtoA, b, 0, a0, b0, c0, k - 1, VA, VB, VC)) {
        return 1;
    }
    int pourCtoB = min(c, VB - b);
    if (pourCtoB > 0 && pour(a, b + pourCtoB, 0, a0, b0, c0, k - 1, VA, VB, VC)) {
        return 1;
    }
    return 0;
}
int main() {
    int k, VA, VB, VC, a, b, c, a0, b0, c0;
    scanf("%d %d %d %d %d %d %d %d %d %d", &k, &VA, &VB, &VC, &a, &b, &c, &a0, &b0, &c0);
    if (pour(a, b, c, a0, b0, c0, k, VA, VB, VC)) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}




