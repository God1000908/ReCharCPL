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
void bubblesort(int num[], int n)
{
    if(n < 2) return;
    for (int i = 0; i < n - 1; ++i) {
        if(num[i] > num[i + 1])
            swap(&num[i], &num[i + 1]);
    }
    bubblesort(num, n - 1);
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    int num[15] = { 0 };
    for (int i = 0; i < n; ++i) {
        scanf("%d", &num[i]);
    }
    bubblesort(num, n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", num[i]);
    }
    return 0;
}