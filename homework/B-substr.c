//
// Created by zy337 on 2023/11/26.
//
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>
#define LEN 100005
int main()
{
    char *str1 = malloc(LEN * sizeof(*str1));
    char *str2 = malloc(LEN * sizeof(*str2));
    fgets(str1, LEN, stdin);
    fflush(stdin);
    fgets(str2, LEN, stdin);
    unsigned long long len1 = strlen(str1);
    unsigned long long len2 = strlen(str2);
    for (int i = 0; i < len1; ++i) {
        bool flag = true;
        for (int j = 0; j < len2; ++j) {
            if(*(str2 + j) != *(str1 + i + j)) {
                flag = false;
                break;
            }
            else
                flag = true;
        }
        if(flag)
            printf("%d ", i);
    }
    free(str1);
    free(str2);
    return 0;
}