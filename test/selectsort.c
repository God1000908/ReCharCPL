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
void selectsort(int *num, int n)
{
    if(n < 2) return;
    int index = 0;
    for (int i = 0; i < n; ++i) {
        if(*(num + index) > *(num + i)) {
            index = i;
        }
    }
    if(index != 0)
        swap(num, num + index);
    selectsort(num + 1, n - 1);
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    int num[15] = { 0 };
    for (int i = 0; i < n; ++i) {
        scanf("%d", &num[i]);
    }
    selectsort(num, n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", num[i]);
    }
    return 0;
}