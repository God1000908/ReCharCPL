//
// Created by zy337 on 2023/11/23.
//
#include <stdio.h>
void swap(int *i, int *j)
{
    int t = 0;
    t = *i;
    *i = *j;
    *j = t;
}
void quicksort(int num[], int l, int r)
{
    if(l >= r) return;
    int i = l;
    int j = r;
    int key = num[i];
    while(i < j){
        while(i < j && num[j] >= key) j --;
        swap(&num[i], &num[j]);
        while(i < j && num[i] <= key) i ++;
        swap(&num[i], &num[j]);
    }
    quicksort(num, l, j - 1);
    quicksort(num, i + 1, r);
}
int main()
{
    int num[10] = { 0 };
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &num[i]);
    }
    quicksort(num, 0, n - 1);
    for (int i = 0; i < n; ++i) {
        printf("%d ", num[i]);
    }
}