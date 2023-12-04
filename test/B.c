//
// Created by zy337 on 2023/12/3.
//
#include <stdio.h>
#define MAX_LEN 1000
int main() {
    int stack[MAX_LEN];
    int len;
    int index = 0;
    scanf("%d", &len);
    int a[MAX_LEN];
    int b[MAX_LEN];
    for (int i = 0; i < len; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < len; ++i) {
        scanf("%d", &b[i]);
    }
    int s_top = -1;
    for (int i = 0; i < len; ++i) {
        stack[++s_top] = a[i];
        while (s_top != -1 && stack[s_top] == b[index]) {
            s_top--;
            index++;
        }
    }
    if (s_top == -1) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}