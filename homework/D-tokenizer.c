#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
char str[4100][4100] = { 0 };
char result[4100][9] = { 0 };
char reserved[17][10] = {"const","int","float","char",
                         "void","static","double","return",
                         "goto","extern","enum","struct",
                         "break","union","typedef","long"};
char operator[12][3] = {"=", "==", "!=", ">=", "<=", "<",
                        ">", "-", "+", "*", "/"};
static int index = 0;
int process(const char *str)
{
    bool global1 = true;
    bool global2 = true;
    bool flag1 = true;
    bool flag2 = true;
    int len = strlen(str);
    int hash = 0;
    int digit = -1;
    char temp1[4100] = { 0 };
    char temp2[4100] = { 0 };
    char temp3[2] = { 0 };
    if(len == 1 && str[0] == ';'){
        result[index][0] = '\n';
        index ++;
        return 1;
    }
    for (int i = 0; i < len; ++i) {
        if (str[i] == ';') {
            digit = i;
            temp3[0] = ';';
            break;
        }
    }
    if(temp3[0] == ';') {
        for (int i = 0; i < digit; ++i) {
            temp1[i] = str[i];
        }
        for (int i = digit + 1; i < len; ++i) {
            temp2[i - 1 - digit] = str[i];
        }//printf("%s %s %s\n", temp1, temp3, temp2);
        if (temp1[0] != '\0') {
            if(process(temp1)){
                global1 = true;
            }else global1 = false;
        }//printf("%d\n", global1);
        process(temp3);
        if (temp2[0] != '\0') {
            if(process(temp2)){
                global2 = true;
            }else global2 = false;
        }//printf("%d %d %d\n", global1, global2,global1 && global2);
        if(global1 && global2){
            return 1;
        }else return 0;
    }
    for (int i = 0; i < 16; ++i) {
        if(strcmp(str, reserved[i]) == 0){
            strcpy(result[index], "reserved");
            index ++;
            return 1;
        }
    }
    if(flag1){
        for (int i = 0; i < 11; ++i) {
            if(strcmp(str, operator[i]) == 0){
                strcpy(result[index], "operator");
                index ++;
                return 1;
            }
        }
    }
    if(flag1){
        if(str[0] == '-'||(str[0] == '.' && len == 1)){
            return 0;
        }else{
            for (int i = 0; i < len; ++i) {
                if(str[i] == '.') hash ++;
                if(!(isdigit(str[i]) || str[i] == '.')){
                    flag2 = false;
                    break;
                }
            }
            if(flag2 && hash == 0){
                strcpy(result[index], "integer");
                index ++;
                return 1;
            }else if(flag2 && hash == 1){
                strcpy(result[index], "float");
                index ++;
                return 1;
            }else if(flag2 && hash > 1){
                return 0;
            }
        }
    }
    if(flag1){
        if(isdigit(str[0])){
            return 0;
        }else {
            for (int i = 0; i < len; ++i) {
                if(!(isalnum(str[i]) || str[i] == '_')){
                    return 0;
                }
            }
            strcpy(result[index], "variable");
            index ++;
            return 1;
        }
    }
}
int main()
{
    int i = 0;
    bool flag = true;
    while((scanf("%4100s", str[i])) != EOF){
        //printf("%d\n", process(str[i]));
        if(process(str[i])){
            flag = true;
        }else {
            flag = false;
            break;
        }
        i ++;
    }
    if(flag){
        for (int j = 0; j < index; ++j) {
            if(result[j][0] == '\n') printf("%s", result[j]);
            else printf("%s ", result[j]);
        }
    }else
        printf("Compile Error\n");
    return 0;
}