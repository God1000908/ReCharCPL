//
// Created by zy337 on 2023/11/21.
//
#include <stdio.h>
#include <string.h>
#include <math.h>
char ch[1005];
int main()
{
    int a, b, c;
    int x1, x2, y1, y2;
    int count1 = 0;
    int count2 = 0;
    scanf("%d%d%d", &a, &b, &c);
    scanf("%1005s", ch);
    x1 = 0;
    x2 = a;
    y1 = 0;
    y2 = b;
    for (int i = 0; i < strlen(ch); ++i) {
        int t = 0;
        if(ch[i] == 'W' && (abs(count1) % 2) == 0) {
            x2 = x1;
            x1 -= c;
            t = a;
            a = c;
            c = t;
            count1 ++;
            continue;
        }
        if(ch[i] == 'W' && (abs(count1) % 2) != 0) {
            x2 = x1;
            x1 -= c;
            t = a;
            a = c;
            c = t;
            count1 ++;
            continue;
        }
        if(ch[i] == 'S' && (abs(count1) % 2) == 0) {
            x1 = x2;
            x2 += c;
            t = a;
            a = c;
            c = t;
            count1 --;
            continue;
        }
        if(ch[i] == 'S' && (abs(count1) % 2) != 0) {
            x1 = x2;
            x2 += c;
            t = a;
            a = c;
            c = t;
            count1 --;
            continue;
        }
        if(ch[i] == 'D' && (abs(count2) % 2) == 0){
            y1 = y2;
            y2 += c;
            t = c;
            c = b;
            b = t;
            count1 ++;
            continue;
        }
        if(ch[i] == 'D' && (abs(count2) % 2) != 0){
            y1 = y2;
            y2 += c;
            t = c;
            c = b;
            b = t;
            count2 ++;
            continue;
        }
        if(ch[i] == 'A' && (abs(count2) % 2) == 0){
            y2 = y1;
            y1 -= c;
            t = c;
            c = b;
            b = t;
            count2 --;
            continue;
        }
        if(ch[i] == 'A' && (abs(count2) % 2) != 0){
            y2 = y1;
            y1 -= c;
            t = c;
            c = b;
            b = t;
            count2 --;
            continue;
        }

    }
    printf("%d %d %d %d", x1, x2, y1, y2);
    return 0;
}