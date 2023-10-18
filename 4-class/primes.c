//
// Created by zy337 on 2023/10/13.
//
#include <stdio.h>
int main()
{
    int prime = 0;
    scanf("%d", &prime);
    for(int i = 2; i <= prime; ++i)
    {
        int is_prime = 1;
        for(int j = 2; j*j <= i; ++j)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }
            if(is_prime == 1)
                printf("%d ", i);
    }
    return 0;
}