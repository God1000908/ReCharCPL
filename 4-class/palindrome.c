//
// Created by zy337 on 2023/10/18.
//
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define LEN 21
char str[LEN] = "";
int main()
{
    printf("Please input a string containing at most 20 characters:");
    scanf_s("%20s", str);
    bool is_palindrome = true;
    int len = strlen(str);
    /*int len = 0;
    while(str[len] != '\0'){
        len ++;
    }*/
    //To test palindrome
    //The "for" version
    for (int i = 0, j = len - 1; i < j ; i ++, j --)//can't be written like "int i = 0, int j = len - 1"
    {
        if(str[i] != str[j]) {
            is_palindrome = false;
            break;
        }
    }
    //The "while" version
    /*int i = 0;
    int j = len - 1;
    while(i < j){
        if(str[i] != str[j]) {
            is_palindrome = false;
            break;
        }
        i ++;
        j --;
    }*/
    if(is_palindrome)
        printf("Y");
    else
        printf("N");
    return 0;
}