//
// Created by zy337 on 2023/11/26.
//
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdbool.h>
#define LEN 4100
int main()
{
    char *str = malloc(LEN * sizeof(*str));
    fgets(str, LEN, stdin);
    unsigned long long len = strlen(str);
    bool flag = true;
    for (int i = 0; i < len; ++i) {
        if(*(str + i) == ' '){
            flag = true;
            continue;
        }
        if(flag == true){
            if(*(str + i) >= 'a' && *(str + i) <= 'z'){
                *(str + i) -= 32;
            }
            flag = false;
            continue;
        }
        if(flag == false){
            if(*(str + i) >= 'A' && *(str + i) <= 'Z'){
                *(str + i) += 32;
            }
            continue;
        }
    }
    printf("%s", str);
    free(str);
    return 0;
}