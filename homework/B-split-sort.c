//
// Created by zy337 on 2023/12/20.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char str[10002] = { 0 };
int compare_str(const void *left, const void *right) {
    char *const *pp1 = left;
    char *const *pp2 = right;
    return strcmp(*pp1, *pp2);
}
int main()
{
    char *result[102] = { 0 };
    char delim[2] = { 0 };
    int (*comp)(const void*, const void*) = compare_str;
    for (int i = 0; i < 102; ++i) {
        result[i] = (char *)malloc(102 * sizeof(result[i][0]));
    }
    scanf("%10005s%1s", str, delim);
    int col = 0;
    int len = 0;
    for (int j = 0; str[j] != '\0' ; ++j) {
        if(str[j] != delim[0]){
            result[col][len] = str[j];
            len ++;
        }else{
            result[col][len] = '\0';
            len = 0;
            col ++;
        }
    }
    result[col][len] = '\0';
    qsort(result, col + 1, sizeof(* result), comp);
    for (int j = 0; j <= col; ++j) {
        printf("%s\n", result[j]);
    }
    for (int i = 0; i < 102; ++i) {
        free(result[i]);
    }
    return 0;
}