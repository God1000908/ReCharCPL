//
// Created by zy337 on 2023/12/2.
//
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void mystrcat(char *str1, char *str2)
{
    unsigned long long len1 = strlen(str1);
    unsigned long long len2 = strlen(str2);
    unsigned long long t = len2;
    unsigned long long len = (len1 > len2 ? len1 : len2);
    bool flag = false;
    unsigned long long index = 0;
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < (len1 < len2 ? len1 : len2); ++j) {
            if(str1[len1 - 1 - j] == str2[(len1 < len2 ? len1 : len2) - 1 - j]){
                flag = true;
            }else {
                flag = false;
                break;
            }
        }
        len2 --;
        if(flag){
            index = t - i;
            break;
        }
    }
    char str3[1005] = "";
    for (unsigned long long i = index; i < t; ++i) {
        str3[i - index] = str2[i];
    }
    printf("%s%s\n", str1, str3);
}
int main()
{
    int T = 0;
    scanf("%d", &T);
    for (int i = 0; i < T; ++i) {
        char str1[1005] = "";
        char str2[1005] = "";
        scanf("%1005s", str1);
        scanf("%1005s", str2);
        mystrcat(str1, str2);
    }
    return 0;
}