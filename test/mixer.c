//
// Created by zy337 on 2024/1/1.
//
#include <stdio.h>
int main(){
    int T;
    scanf("%d", &T);
    while(T --){
        char delete = 0;
        scanf("%c", &delete);
        int rgb1 = 0, rgb2 = 0;
        char ch1 = 0, ch2 = 0;
        scanf("%c%X %c%X", &ch1, &rgb1, &ch2, &rgb2);
        printf("#%06X\n", rgb1 + rgb2);
    }
    return 0;
}