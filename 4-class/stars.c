//
// Created by zy337 on 2023/10/13.
//
#include <stdio.h>
int main()
{
    int line = 0;
    scanf("%d", &line);
    for(int i = 0; i < line; i ++)
    {
        for(int j = 0; j < line - 1 - i; j ++)
            printf(" ");
        for(int j = 0; j < 2*i + 1; j ++)
            printf("*");
        if(i < line - 1)
            printf("\n");
    }
    return 0;
}