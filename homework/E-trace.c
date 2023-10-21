//
// Created by zy337 on 2023/10/21.
//
#include <stdio.h>
char trace[5005][5005] = { 0 };
int num[5005][5005] = { 0 };
int num2[5005][5005] = { 0 };
int main()
{
    int n, m, x0, y0;
    int count = 0;
    scanf("%d%d%d%d", &n, &m, &x0, &y0);
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < m; j ++)
        {
            scanf(" %c", &trace[i][j]);
        }
    }
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < m; j ++)
        {
            if(trace[i][j] == '#') {
                count++;
                num2[i][j] = 1;
            }else{
                num2[i][j] = 0;
            }
        }
    }
    for (int i = 1; i <= n; i ++)
    {
        for (int j = 1; j <= m; j ++)
        {
            num[i][j] = num2[i - 1][j - 1];
        }
    }
    printf("%d\n", count);
    while(num[x0][y0] != 0||num[x0 - 1][y0] != 0||num[x0 + 1][y0] != 0||num[x0][y0 - 1] != 0||num[x0][y0 + 1] != 0){
        printf("%d %d\n", x0, y0);
        num[x0][y0] = 0;
        if(num[x0 - 1][y0] != 0){
            x0 -= 1;
        }
        else if(num[x0 + 1][y0] != 0){
            x0 += 1;
        }
        else if(num[x0][y0 + 1] != 0){
            y0 += 1;
        }
        else if(num[x0][y0 - 1] != 0){
            y0 -= 1;
        }
    }
    return 0;
}
