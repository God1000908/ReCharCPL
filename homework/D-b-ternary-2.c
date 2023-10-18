//
// Created by zy337 on 2023/10/14.
//
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
void d_to_bt(int num)
{
    if (num == 0) {
        printf("0\n");
        return;
    }
    char result[22];
    int index = 0;
    while (num != 0) {
        int remainder = num % 3;
        if (remainder < 0) {
            remainder += 3;
            num -= 1;
        }
        if (remainder == 2) {
            result[index] = 'Z';
            num += 1;
        } else {
            result[index] = '0' + remainder;
        }
        num /= 3;
        index++;
    }
    for (int i = index - 1; i >= 0; i--)
    {
        printf("%c", result[i]);
    }
    printf("\n");
}
char num[10005][22];
int Valid[10005];
int decimals[10005];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%15s", num[i]);
        Valid[i] = 1;
        for (int j = 0; j < strlen(num[i]); j++)
        {
            if (!isdigit(num[i][j]) && num[i][j] != '-' && num[i][j] != 'z') {
                Valid[i] = 0;
                break;
            }
        }
        if (Valid[i]) {
            decimals[i] = atoi(num[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (Valid[i]) {
            d_to_bt(decimals[i]);
        } else {
            printf("Radix Error\n");
        }
    }
    return 0;
}