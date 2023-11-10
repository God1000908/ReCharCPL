//
// Created by zy337 on 2023/11/10.
//
#include <stdio.h>
int Sum(const int num[], int len);
int main()
{
    const int num[] = {1, 2, 3, 4, 5 };
    int sum = Sum(num, sizeof num / sizeof num[0]);
    printf("sum = %d", sum);
    return 0;
}
int Sum(const int num[], int len)
{
    if(len == 0){
        return 0;
    }
    int sum = Sum(num, len - 1);
    return sum + num[len - 1];
}