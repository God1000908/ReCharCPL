//
// Created by zy337 on 2023/12/20.
//
#include <stdio.h>
typedef  struct{
    int p1;
    int p2;
    char str[11];
    int pp1[10001];
    int pp2[10001];
}mux;
mux pp;
int plus[10005];
int divide[10005];
int multiply[20005];
void print(const int num[], int len){
    for (int i = len; i >= 0; --i) {
        if(i == len){
            printf("%d%s^%d", num[i], pp.str, i);
        }else if(num[i] == 0)
            continue;
        else if(i > 1){
            if(num[i] == 1)
                printf("+%s^%d", pp.str, i);
            else if(num[i] == -1)
                printf("-%s^%d", pp.str, i);
            else if(num[i] > 0)
                printf("+%d%s^%d", num[i], pp.str, i);
            else if(num[i] < 0)
                printf("%d%s^%d", num[i], pp.str, i);
        }else if(i == 1){
            if(num[i] == 1)
                printf("+%s", pp.str);
            else if(num[i] == -1)
                printf("-%s", pp.str);
            else if(num[i] > 0)
                printf("+%d%s", num[i], pp.str);
            else if(num[i] < 0)
                printf("%d%s", num[i], pp.str);
        }else if(i == 0){
            if(num[i] < 0)
                printf("%d", num[i]);
            else if(num[i] > 0)
                printf("+%d", num[i]);
        }
    }
    printf("\n");
}
int main()
{
    scanf("%d%d", &pp.p1, &pp.p2);
    scanf("%11s", pp.str);
    for (int i = pp.p1; i >= 0; --i) {
        scanf("%d", &pp.pp1[i]);
    }
    for (int i = pp.p2; i >= 0; --i) {
        scanf("%d", &pp.pp2[i]);
    }
    int len = (pp.p1 > pp.p2 ? pp.p1 : pp.p2);
    for (int i = 0; i <= len; ++i) {
        plus[i] = pp.pp1[i] + pp.pp2[i];
    }
    print(plus, len);
    for (int i = 0; i <= len; ++i) {
        divide[i] = pp.pp1[i] - pp.pp2[i];
    }
    print(divide, len);
    for (int i = pp.p1; i >= 0; --i) {
        for (int j = pp.p2; j >= 0; --j) {
            multiply[i + j] += (pp.pp1[i] * pp.pp2[j]);
        }
    }
    print(multiply, pp.p1 + pp.p2);
    return 0;
}
