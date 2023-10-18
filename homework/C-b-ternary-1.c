//
// Created by zy337 on 2023/10/14.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int change(char *str)
{
    int length = strlen(str);
    int sum = 0;
    int digits = 1;
    for(int i = length - 1; i >= 0; i --)
    {
        if(str[i] == '1'){
            sum += digits;
        }else if(str[i] == 'Z'){
            sum -= digits;
        }
        digits *= 3;
    }
    return sum;
}
int main()
{
    int n = 0;
    int judge[1000] = { 0 };
    int fin[1000] = { 0 };
    scanf("%d", &n);
    for(int i = 0; i < n; i ++) {
        char delete;
        scanf("%c", &delete);
        char str[16];
        scanf(" %15s", str);
        int point = 1;
        for (int j = 0; j < strlen(str); j++) {
            if ((str[j] != '1') && (str[j] != 'Z') && (str[j] != '0')) {
                point = 0;
                break;
            }
        }
        judge[i] = point;
        if(point == 1){
            fin[i] = change(str);
        }
    }
    for(int i = 0; i < n; i ++)
    {
        if(judge[i] == 0){
            printf("Radix Error\n");
        }else if(judge[i] == 1){
            printf("%d\n", fin[i]);
        }
    }
    return 0;
}