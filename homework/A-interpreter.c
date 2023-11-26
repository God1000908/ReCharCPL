//
// Created by zy337 on 2023/11/26.
//
#include <stdio.h>
int main()
{
    int x = 0;
    scanf("%x", &x);
    unsigned int *ptr_u = (unsigned int *)&x;
    float *ptr_f = (float *)&x;
    printf("%d\n", x);
    printf("%u\n", *ptr_u);
    printf("%f\n", *ptr_f);
    printf("%.3e\n", *ptr_f);
    return 0;
}