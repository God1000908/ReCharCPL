//
// Created by zy337 on 2023/10/27.
//
#include <stdio.h>
int magic[1000][1000] = {};

int main()
{
    int n = 0;
    scanf("%d", &n);
    int a = 0;
    int b = (n - 1)/2;
    magic[a][b] = 1;
    for(int i = 2; i <= n * n; i ++)
    {
        if(a == 0&&b == n - 1){
            a = n - 1;
            b = 0;
            if(magic[a][b] == 0)
                magic[a][b] = i;
            else{
                a = 1;
                b = n - 1;
                magic[a][b] = i;
            }
        }else if(a == 0&&b != n - 1){
            a = n - 1;
            b ++;
            if(magic[a][b] == 0)
                magic[a][b] = i;
            else{
                a = 1;
                b -= 2;
                magic[a][b] = i;
            }
        }else if(a != 0&&b == n - 1){
            b = 0;
            a --;
            if(magic[a][b] == 0)
                magic[a][b] = i;
            else{
                a += 2;
                b = n - 1;
                magic[a][b] = i;
            }
        }else{
            a --;
            b ++;
            if(magic[a][b] == 0)
                magic[a][b] = i;
            else{
                a += 2;
                b --;
                magic[a][b] = i;
            }
        }
    }
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < n; j ++)
        {
            printf("%d ", magic[i][j]);
        }
        printf("\n");
    }
}