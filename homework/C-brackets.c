//
// Created by zy337 on 2023/11/18.
//
#include <stdio.h>
#define MAX_LEN 100005
int main() {
    char stack[MAX_LEN];
    int T = 0;
    scanf("%d", &T);
    char str[MAX_LEN];
    for (int i = 0; i < T; ++i) {
        int s_top = -1;
        scanf("%100005s",str);
        for (int j = 0; str[j] != '\0'; ++j) {
            if(str[j] == '(' || str[j] == '{' || str[j] == '[')
                stack[++s_top] = str[j];
            char t;
            if(str[j] == ')' || str[j] == '}' || str[j] == ']') {
                t = str[j];
                if (s_top != -1 && (stack[s_top] == '(' && t == ')' ||
                    stack[s_top] == '[' && t == ']' ||
                    stack[s_top] == '{' && t == '}')) {
                    s_top--;
                } else if (s_top != -1 && (stack[s_top] == '(' && t != ')' ||
                        stack[s_top] == '[' && t != ']' ||
                        stack[s_top] == '{' && t != '}'))
                    break;
            }
        }
        if (s_top == -1) {
            printf("True\n");
        } else {
            printf("False\n");
        }
    }
    return 0;
}