//
// Created by zy337 on 2023/10/13.
//
#include <stdio.h>
int main()
{
    int num = 0;
    scanf("%d", &num);
    int number_digits = 0;
    if(num == 0){
        number_digits = 1;
    }
    else {
        while (num > 0) {
            num /= 10;
            number_digits++;
        }
    }
    printf("Num of digits is %d", number_digits);
    return 0;
}