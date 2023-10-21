//
// Created by zy337 on 2023/10/21.
//
#include <stdio.h>
char mines[105][105] = {0};
char old[105][105] = {0};
int num[105][105] = {0};
int main()
{
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i <= n + 1; i++)
    {
        for (int j = 0; j <= n + 1; j++) {
            old[i][j] = 'o';
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf(" %c", &mines[i][j]);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++) {
            if (mines[i][j] == '*') {
                printf("*");
            } else {
                num[i][j] = (mines[i - 1][j - 1] == '*') +
                            (mines[i][j - 1] == '*') +
                            (mines[i - 1][j] == '*') +
                            (mines[i - 1][j + 1] == '*') +
                            (mines[i][j + 1] == '*') +
                            (mines[i + 1][j - 1] == '*') +
                            (mines[i + 1][j] == '*') +
                            (mines[i + 1][j + 1] == '*');
                printf("%d", num[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}