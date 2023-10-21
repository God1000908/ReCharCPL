//
// Created by zy337 on 2023/10/21.
//
#include <stdio.h>
int main()
{
    int m, n, p;
    int x = 0;
    int count = 0;
    int mm = 0;
    scanf("%d %d %d", &m, &n, &p);
    int num1[101][101] = { 0 };
    int num2[101][101] = { 0 };
    int result[101][101] = { 0 };
    for(int i = 0; i < m; i ++)
    {
        for(int j = 0; j < n; j ++)
        {
            scanf("%d", &num1[i][j]);
        }
    }
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < p; j ++)
        {
            scanf("%d", &num2[i][j]);
        }
    }
    for(int i = 0; i < m; i ++)
    {
        for(int j = 0; j < p; j ++)
        {
            result[i][j] = 0;
            for(int k = 0; k < n; k ++)
            {
                result[i][j] += num1[i][k] * num2[k][j];
            }
        }
    }
    for(int i = 0; i < m; i ++)
    {
        for(int j = 0; j < p; j ++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}