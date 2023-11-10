//
// Created by zy337 on 2023/11/10.
//
#include <stdio.h>
#define NUM 3
const int number[NUM] = { 23, 5, 12};
int Min(const int number[], int len);
int main()
{
    int mini = Min(number, NUM);
    printf("min = %d", mini);
    return 0;
}
int Min(const int number[], int len)
{
    if(len == 1){
        return number[0];
    }
    int min = Min(number, len - 1);
    return min < number[len - 1] ? min : number[len - 1];
}