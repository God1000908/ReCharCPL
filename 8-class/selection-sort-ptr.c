//
// Created by zy337 on 2023/11/24.
//
#include <stdio.h>
#include <malloc.h>
void Swap(int *x, int *y)
{
    int t = *y;
    *y = *x;
    *x = t;
}
void SelectionSort(int *num, int n)
{
    if(n < 2) return;
    int index = 0;
    for (int i = 0; i < n; ++i) {
        if(*(num + index) > *(num + i)) {
            index = i;
        }
    }
    if(index != 0)
        Swap(num, num + index);
    SelectionSort(num + 1, n - 1);
}
void Print(const int num[], int len)
//v: int, const int
//ptr_v: int *, int * const(can't change the thing it points)
//const int *, const int * const, int const *, int const *
{
    for (int i = 0; i < len; ++i) {
        printf("%d ", num[i]);
    }
    printf("\n");
}
int main()
{
    int len = 0;
    scanf("%d", &len);
    int *numbers = malloc(len * sizeof(*numbers));
    //size_t size: unsigned long/long long.
    if(numbers == NULL){
        return 0;
    }//NULL: null pointer ((void *)0).
    for (int i = 0; i < len; ++i) {
        scanf("%d", &numbers[i]);
    }
    Print(numbers, len);
    SelectionSort(numbers, len);
    //SelectionSort(&numbers[0], len)
    Print(numbers, len);
    free(numbers);
    //multiple free isn't a definite behavior
    //free is to free the data in heap(malloc .etc), not stack.
    return 0;
}