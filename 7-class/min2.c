//
// Created by zy337 on 2023/11/10.
//
//Stack: 栈（程序运行分配的空间） Heap: 堆
//Stack frame: 栈帧（每次调用函数前为函数分配的空间）
#include <stdio.h>
int Min(int a, int b)
{
    return a < b ? a : b;
}
int main()
{
    int a = 0;
    int b = 0;
    scanf_s("%d%d", &a, &b);
    int min = Min(a, b);
    printf("%d", min);
    return 0;
}