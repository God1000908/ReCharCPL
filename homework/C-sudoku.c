//
// Created by zy337 on 2023/10/21.
//
#include <stdio.h>
long long num[10][10] = { 0 };
int hash1[10] = { 0 };
int main()
{
    int point = 0;
    for(int i = 0; i < 9; i ++)
    {
        for (int j = 0; j < 9; j ++)
        {
            scanf(" %lld", &num[i][j]);
        }
    }
    for (int i = 0; i < 9; i ++)
    {
        long long ji1 = 1, ji2 = 1;
        long long sum1 = 0, sum2 = 0;
        for (int j = 0; j < 9; j ++)
        {
            sum1 = sum1 + num[i][j];
            ji1 *= num[i][j];
            sum2 = sum2 + num[j][i];
            ji2 *= num[j][i];
            hash1[num[i][j]] ++;
        }
        if(sum1 == 45&&ji1 == 362880&&sum2 == 45&&ji2 == 362880)
            point = 1;
        else {
            point = 0;
            break;
        }
    }
    for (int i = 1; i < 10; i ++)
    {
        if(hash1[i] != 9) {
            point = 0;
            break;
        }
    }
    int count = 0;
    int col = 0;
    while(count < 7) {
        int hash2[10] = { 0 };
        for (int i = count; i < count + 3; i++) {
            for (int j = col; j < col + 3; j++) {
                hash2[num[i][j]]++;
            }
        }
        count += 3;
        col += 3;
        for (int i = 1; i < 10; i ++)
        {
            if(hash2[i] != 1) {
                point = 0;
                break;
            }
        }
        if(point == 0)
            break;
    }
    if(point == 1)
        printf("YES");
    else if(point == 0)
        printf("NO");
    return 0;
}