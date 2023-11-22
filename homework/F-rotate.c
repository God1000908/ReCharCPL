//
// Created by zy337 on 2023/11/21.
//
#include <stdio.h>
#include <string.h>
char ch[1005];
void swap(int *a, int *b)
{
    int t = 0;
    t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    int a, b, c;
    int x1, x2, y1, y2;
    scanf("%d%d%d", &a, &b, &c);
    scanf("%1005s", ch);
    x1 = 0;
    x2 = a;
    y1 = 0;
    y2 = b;
    for (int i = 0; i < strlen(ch); ++i) {
        if(ch[i] == 'W') {
            x2 = x1;
            x1 -= c;
            swap(&a, &c);
            continue;
        }
        if(ch[i] == 'S') {
            x1 = x2;
            x2 += c;
            swap(&a, &c);
            continue;
        }
        if(ch[i] == 'D'){
            y1 = y2;
            y2 += c;
            swap(&b, &c);
            continue;
        }
        if(ch[i] == 'A'){
            y2 = y1;
            y1 -= c;
            swap(&b, &c);
            continue;
        }
    }
    printf("%d %d %d %d", x1, x2, y1, y2);
    return 0;
}