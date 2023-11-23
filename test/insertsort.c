//
// Created by zy337 on 2023/11/23.
//
#include <stdio.h>
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
void insertsort(int *num, int n)
{
    if(n < 2) return;
    for (int i = 1; i < n; ++i) {
        int temp = num[i];
        int j = 0;
        for (j = i - 1; j >= 0 ; --j) {
            if(num[j] <= temp)
                break;
            num[j + 1] = num[j];
        }
        num[j + 1] = temp;
    }
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    int num[15] = { 0 };
    for (int i = 0; i < n; ++i) {
        scanf("%d", &num[i]);
    }
    insertsort(num, n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", num[i]);
    }
    return 0;
}