//
// Created by zy337 on 2023/12/2.
//
#include <stdio.h>
#include <string.h>
char str1[1000005] = "";
char str2[1000005] = "";
char str3[1000005] = "";
void change(const char *str, int len){
    int count1 = 1;
    int count2 = 1;
    for (int i = 0; i < len; ++i) {
            if(str[i] <= 'Z'&&i == 0){
                str1[0] = str[0] + 32;
                str2[0] = str[0];
                str3[0] = str[0] + 32;
            }else if(str[i] >= 'a' && i == 0){
                str1[0] = str[0];
                str2[0] = str[0] - 32;
                str3[0] = str[0];
            }else if(str[i] == '_'){
                str1[count1] = str[i + 1] - 32;
                str2[count1] = str[i + 1] - 32;
                str3[count2] = str[i];
                i ++;
                str3[count2 + 1] = str[i];
                count1 ++;
                count2 += 2;
            }else if(str[i] <= 'Z' && i != 0){
                str1[count1] = str[i];
                str2[count1] = str[i];
                str3[count2 + 1] = str[i] + 32;
                str3[count2] = '_';
                count1 ++;
                count2 += 2;
            }else {
                str1[count1] = str[i];
                str2[count1] = str[i];
                str3[count2] = str[i];
                count1 ++;
                count2 ++;
        }

    }
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s", str3);
}
int main()
{
    char str[1000005] = "";
    scanf("%1000005s", str);
    change(str, strlen(str));
    return 0;
}