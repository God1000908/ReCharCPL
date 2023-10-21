#include <stdio.h>
char f[2005][2005] = { 0 };
char mf[2005][2005] = { 0 };
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    for(int i = 0; i <= m; i ++)
    {
        for(int j = 0; j < n; j ++)
        {
            f[i][j] = '0';
        }
    }
    for(int i = 0; i <= m + 1; i ++)
    {
        for(int j = 0; j <= n + 1; j ++)
        {
            mf[i][j] = '0';
        }
    }
    for(int i = 0; i < n; i ++)
    {
        scanf(" %c", &f[0][i]);
    }
    for(int i = 0; i <= m; i ++)
    {
        for(int j = 1; j <= n; j ++)
        {
            mf[i][j] = f[i][j - 1];
        }
    }
    for(int i = 1; i <= m; i ++)
    {
        for(int j = 1; j <= n; j ++)
        {
            if(mf[i - 1][j - 1] == '1'&&mf[i - 1][j] == '1'&&mf[i - 1][j + 1] == '1')
                mf[i][j] = '0';
            if(mf[i - 1][j - 1] == '1'&&mf[i - 1][j] == '1'&&mf[i - 1][j + 1] == '0')
                mf[i][j] = '1';
            if(mf[i - 1][j - 1] == '1'&&mf[i - 1][j] == '0'&&mf[i - 1][j + 1] == '1')
                mf[i][j] = '1';
            if(mf[i - 1][j - 1] == '1'&&mf[i - 1][j] == '0'&&mf[i - 1][j + 1] == '0')
                mf[i][j] = '0';
            if(mf[i - 1][j - 1] == '0'&&mf[i - 1][j] == '1'&&mf[i - 1][j + 1] == '1')
                mf[i][j] = '1';
            if(mf[i - 1][j - 1] == '0'&&mf[i - 1][j] == '1'&&mf[i - 1][j + 1] == '0')
                mf[i][j] = '1';
            if(mf[i - 1][j - 1] == '0'&&mf[i - 1][j] == '0'&&mf[i - 1][j + 1] == '1')
                mf[i][j] = '1';
            if(mf[i - 1][j - 1] == '0'&&mf[i - 1][j] == '0'&&mf[i - 1][j + 1] == '0')
                mf[i][j] = '0';
        }
    }
    for(int i = 1; i < m; i ++)
    {
        for(int j = 1; j <=n; j ++)
        {
            printf("%c", mf[i][j]);
        }
        printf("\n");
    }
    return 0;
}