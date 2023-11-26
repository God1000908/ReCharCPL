//
// Created by zy337 on 2023/11/23.
//
#include <stdio.h>
int L, R;
int sum;
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
int trans(int num[], int l, int r)
{
    if(l >= r) return sum;
    if(num[r] > R && num[l] >= L){
        if((num[r] - R) > (R - num[l])){
            sum += (R - num[l]);
            num[r] -= (R - num[l]);
            return trans(num, l + 1, r);
        }else if((num[r] - R) <= (R - num[l])){
            sum += (num[r] - R);
            num[r] -= (num[r] - R);
            return trans(num, l, r - 1);
        }
    }else if(num[l] == L){
        return trans(num, l + 1, r);
    }else if(num[r] == L){
        return trans(num, l, r - 1);
    }else if(num[l] < R && num[r] > L){
        num[l] ++;
        num[r] --;
        sum ++;
        return trans(num, l, r);
    }
}
int num[55];
int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &num[i]);
    }
    scanf("%d%d", &L, &R);
    bubblesort(num, N);
    int min = trans(num, 0, N - 1);
    printf("%d", min);
}