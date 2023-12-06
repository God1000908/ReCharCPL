#include <stdio.h>
#include <string.h>
char rule[129] = "";
char s[1024][1024] = { 0 };
char s1[1024][1024] = { 0 };
int find(char str){
    for (int i = 0; rule[i] != '\0'; ++i) {
        if(str == rule[i] && rule[i + 1] == ':')
            return 1;
        else if(str == rule[i] && rule[i + 1] != ':')
            return 2;
    }
    return 0;
}
int main()
{
    int flag = 0;
    int count = 1;
    int count0 = 0;
    scanf("%129s", rule);
    getchar();
    for (int i = 0; ; ++i) {
        scanf("%1024s", s[i]);
        count0 ++;
        if(s[i][0] == 0)
            break;
    }
    for (int i = 0; i < count0; ++i) {
        if(i == 0)
            strcpy(s1[0], s[0]);
        else if(i > 0 && s[i][2] == '\0' && s[i][0] == '-' && find(s[i][1]) == 2){
            s1[count][0] = s[i][1];
            count ++;
        }else if(i > 0 && s[i][2] == '\0' && s[i][0] == '-' && find(s[i][1]) == 0){
            s1[1][0] = s[i][1];
            flag = 2;
            break;
        }else if(i > 0 && s[i][2] == '\0' && s[i][0] == '-' && find(s[i][1]) == 1){
            if(i == count0 - 1){
                flag = 1;
                s1[1][0] = s[i][1];
                break;
            }else{
                s1[count][0] = s[i][1];
                s1[count][1] = '=';
                strcat(s1[count], s[i]);
                count ++;
                i ++;
            }
        }
    }
    if(flag == 0){
        for (int i = 0; i < count; ++i) {
            printf("%s\n", s1[i]);
        }
    }else if(flag == 1){
        printf("%s: option requires an argument -- '%c'",s1[0], s1[1][0]);
    }else if(flag == 2){
        printf("%s: invalid option -- '%c'\n", s1[0], s1[1][0]);
    }
    return 0;
}