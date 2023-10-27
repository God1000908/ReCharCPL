//
// Created by zy337 on 2023/10/25.
//
#include <stdio.h>
#include <string.h>
int n = 0;
char str[1005] = { 0 };
int num[1005] = { 0 };
int old_num[1010] = { 0 };
int main()
{
    scanf("%d", &n);
    scanf("%1005s", str);
    for(int i = 0; i < strlen(str); i ++)
    {
        if(str[i] == '.')
            num[i] = 0;
        else if(str[i] == 'A')
            num[i] = 1;
        else if(str[i] == 'B')
            num[i] = 2;
    }
    for(int i = 0; i < 1010; i ++)
        old_num[i] = 0;
    for(int j = 0; j < n; j ++)
    {
        for (int i = 3; i < strlen(str) + 3; i++)
            old_num[i] = num[i - 3];
        for (int i = 3; i < 1010; i++) {
            int neighbor = old_num[i - 3] + old_num[i - 2] + old_num[i - 1] +
                    old_num[i + 1] + old_num[i + 2] + old_num[i + 3];
            if (old_num[i] == 0) {
                if (neighbor >= 4 && neighbor <= 8 && old_num[i - 3] != 1 && old_num[i - 2] != 1
                    && old_num[i - 1] != 1 && old_num[i + 1] != 1 && old_num[i + 2] != 1 && old_num[i + 3] != 1) {
                    num[i - 3] = 2;
                } else if (neighbor >= 2 && neighbor <= 4 && old_num[i - 3] != 2 && old_num[i - 2] != 2
                && old_num[i - 1] != 2 && old_num[i + 1] != 2 && old_num[i + 2] != 2 &&
                old_num[i + 3] != 2) {
                    num[i - 3] = 1;
                }
            } else if (old_num[i] == 1) {
                if (old_num[i - 3] == 2 || old_num[i - 2] == 2
                    || old_num[i - 1] == 2 || old_num[i + 1] == 2 || old_num[i + 2] == 2 || old_num[i + 3] == 2) {
                    num[i - 3] = 0;
                } else if (neighbor <= 1) {
                    num[i - 3] = 0;
                } else if (neighbor >= 5) {
                    num[i - 3] = 0;
                }
            } else if (old_num[i] == 2) {
                if (old_num[i - 3] == 1 || old_num[i - 2] == 1
                    || old_num[i - 1] == 1 || old_num[i + 1] == 1 || old_num[i + 2] == 1 || old_num[i + 3] == 1) {
                    num[i - 3] = 0;
                } else if (neighbor <= 2) {
                    num[i - 3] = 0;
                } else if (neighbor >= 10) {
                    num[i - 3] = 0;
                }
            }
        }
    }
    for(int i = 0; i < strlen(str); i ++)
    {
        if(num[i] == 0)
            printf(".");
        else if(num[i] == 1)
            printf("A");
        else
            printf("B");
    }
        return 0;
}