//
// Created by zy337 on 2023/11/14.
//
#include <stdio.h>
#include <math.h>
char a[1030][2060];
void paint(int n,int x,int y){
    if(n == 1)
        return;
    int i;
    for(i = 1; i <= n - 1; i ++){
        a[x - n][y - i + 1] = '_';
        a[x - i + 1][y - i + 1] = '\\';
        a[x - n][y + i]   = '_';
        a[x - i + 1][y + i] = '/';
    }
    a[x-i+1][y-i+1]   = '\\';
    a[x-i+1][y+i] = '/';
    paint(n / 2,x,y - n);
    paint(n / 2,x,y + n);
    paint(n / 2,x - n,y);
}
int main()
{
    int i,j,n;
    scanf("%d", &n);
    n = (int)pow(2,n);
    for(i = 1; i < 1025; i ++) {
        for (j = 1; j < 2050; j++) {
            a[i][j] = ' ';
        }
    }
        for (i = 1; i <= 2 * n; i++) {
            a[n][i] = '_';
            if (i <= n) {
                a[n - i + 1][i] = '/';
            } else {
                a[i - n][i] = '\\';
            }
        }
        paint(n / 2, n, n);
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= 2 * n; j++) {
                printf("%c", a[i][j]);
            }
            printf("\n");
        }
        return 0;
}