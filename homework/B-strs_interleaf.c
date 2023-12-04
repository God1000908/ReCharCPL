//
// Created by zy337 on 2023/12/2.
//
#include <stdio.h>
#include <stdbool.h>
int ds1 = 0, ds2 = 0, size = 0;
void interleaveString(const char *str1, const char *str2)
{
    char str[2000] = "";
    int index1 = 0, index2 = 0, digit = 0;
    bool flag1 = false, flag2 = false;
    while (digit < size - 1)
    {
        int count1 = (ds1 < size - digit) ? ds1 : (size - digit - 1);
        for (int i = 0; i < count1; ++i){
            if (str1[index1] != '\0'){
                str[digit++] = str1[index1++];
            }
            else{
                flag1 = true;
                break;
            }
        }
        int count2 = (ds2 < size - digit) ? ds2 : (size - digit - 1);
        for (int i = 0; i < count2; ++i){
            if (str2[index2] != '\0'){
                str[digit++] = str2[index2++];
            }
            else{
                flag2 = true;
                break;
            }
        }
        if (flag1 && flag2){
            break;
        }
    }
    str[digit] = '\0';
    printf("%s\n", str);
}
int main()
{
    int T = 0;
    scanf("%d", &T);

    for (int i = 0; i < T; ++i){
        char str1[1001] = "";
        char str2[1001] = "";
        char ch1 = 0;
        getchar();
        for (int j = 0; (ch1 = getchar()) != ';'; ++j){
            str1[j] = ch1;
        }
        char ch2 = 0;
        for (int j = 0; (ch2 = getchar()) != ';'; ++j){
            str2[j] = ch2;
        }
        scanf("%d;%d;%d", &ds1, &ds2, &size);
        interleaveString(str1, str2);
    }
    return 0;
}