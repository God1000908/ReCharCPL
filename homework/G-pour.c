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
    int pourAtoB = (a < VB - b) ? a : (VB - b);
    if (pourAtoB > 0 && pour(a - pourAtoB, b + pourAtoB, c, a0, b0, c0, k - 1, VA, VB, VC)) {
        return 1;
    }
    int pourAtoC = (a < VC - c) ? a : (VC - c);
    if (pourAtoC > 0 && pour(a - pourAtoC, b, c + pourAtoC, a0, b0, c0, k - 1, VA, VB, VC)) {
        return 1;
    }
    int pourBtoA = (b < VA - a) ? b : (VA - a);
    if (pourBtoA > 0 && pour(a + pourBtoA, b - pourBtoA, c, a0, b0, c0, k - 1, VA, VB, VC)) {
        return 1;
    }
    int pourBtoC = (b < VC - c) ? b : (VC - c);
    if (pourBtoC > 0 && pour(a, b - pourBtoC, c + pourBtoC, a0, b0, c0, k - 1, VA, VB, VC)) {
        return 1;
    }
    int pourCtoA = (c < VA - a) ? c : (VA - a);
    if (pourCtoA > 0 && pour(a + pourCtoA, b, c - pourCtoA, a0, b0, c0, k - 1, VA, VB, VC)) {
        return 1;
    }
    int pourCtoB = (c < VB - b) ? c : (VB - b);
    if (pourCtoB > 0 && pour(a, b + pourCtoB, c - pourCtoB, a0, b0, c0, k - 1, VA, VB, VC)) {
        return 1;
    }
    if (a > 0 && b > 0) {
        int mixABtoC = min(a, min(b, VC - c));
        if (pour(a - mixABtoC, b - mixABtoC, c + mixABtoC, a0, b0, c0, k - 1, VA, VB, VC)) {
            return 1;
        }
    }
    if (a > 0 && c > 0) {
        int mixACtoB = min(a, min(c, VB - b));
        if (pour(a - mixACtoB, b + mixACtoB, c - mixACtoB, a0, b0, c0, k - 1, VA, VB, VC)) {
            return 1;
        }
    }
    if (b > 0 && c > 0) {
        int mixBCtoA = min(b, min(c, VA - a));
        if (pour(a + mixBCtoA, b - mixBCtoA, c - mixBCtoA, a0, b0, c0, k - 1, VA, VB, VC)) {
            return 1;
        }
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




