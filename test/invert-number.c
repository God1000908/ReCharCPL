//
// Created by zy337 on 2023/10/18.
//
#include <stdio.h>
int main()
{
    int num[100] = { 0 };
    int number = 0;
    scanf_s("%d", &number);
    int digits = 0;
    do{
        num[digits] = number % 10;
        number /= 10;
        digits ++;
    }while(number != 0);
    for (int i = 0; i < digits; ++i)
    {
        if(num[i] != 0) {
            printf("%d", num[i]);
        }
    }
    return 0;
}