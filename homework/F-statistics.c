//
// Created by zy337 on 2023/10/24.
//
#include <stdio.h>
char sta[1005][1005] = { 0 };
int x = 0;
int hash[256] = { 0 };
int low[26] = { 0 };
int up[26] = { 0 };
int max = 0;
int n = 0;
int main() {
    scanf("%d", &n);
    char str[1001];
    scanf("%1005s", str);
    for (int i = 0; i < n; i++) {
        char c = str[i];
        if (c >= 'A'&&c <= 'Z'||c >= 'a'&&c <= 'z') {
            if (c >= 'a') {
                hash[c] ++;
                low[c - 'a'] = 1;
            } else {
                hash[c] ++;
                up[c - 'A'] = 1;
            }
        }
    }
    for(int i = 'A'; i < 'z'; i ++)
    {
        if(max < hash[i]){
            max = hash[i];
        }
    }
    max ++;
    for (int i = 0; i < 26; i ++) {
        if (low[i] && up[i]) {
            if (low[i]) {
                sta[max][x] = i + 'a';
                x ++;
            }
            if (up[i]) {
                sta[max][x] = i + 'A';
                x ++;
            }
            sta[max][x] = ' ';
            x ++;
        }else if(low[i] != 0&&up[i] == 0){
            sta[max][x] = i + 'a';
            x ++;
            sta[max][x] = ' ';
            x ++;
        }else if(low[i] == 0&&up[i] != 0){
            sta[max][x] = i + 'A';
            x ++;
            sta[max][x] = ' ';
            x ++;
        }
    }
    for(int i = 0;i < x - 1; i ++)
    {
        sta[max - 1][i] = '-';
    }
    for(int i = 0; i < x - 1; i ++)
    {
        if(hash[sta[max][i]] != 0){
            for(int j = max - 2; j >= max - hash[sta[max][i]] - 1; j --)
            {
                sta[j][i] = '=';
            }
            for(int j = max - hash[sta[max][i]] - 2; j >= 0; j --)
            {
                sta[j][i] = ' ';
            }
        }else if(sta[max][i] == ' '){
            for(int j = max - 2; j >= 0; j --)
            {
                sta[j][i] = ' ';
            }
        }
    }
    for(int i = 0; i <= max; i ++)
    {
        for(int j = 0; j < x - 1; j ++)
        {
            printf("%c", sta[i][j]);
        }
        printf("\n");
    }
    return 0;
}