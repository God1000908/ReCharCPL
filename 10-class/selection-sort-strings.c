//
// Created by zy337 on 2023/12/8.
//
#include <stdio.h>
#include <string.h>
#define LEN 10
void SelectionSort(const char *str[], int len);
int GetMinIndex(const char *str[], int begin, int end);
void swap(const char **str1, const char **str2);
void print(const char *str[], int len);
int main()
{
    const char *musicians[LEN] = {"Luo Dayou", "Cui Jian", "Dou Wei", "Zhang Chu", "Wan Qing",
                            "Li Zhi", "Yao", "Zhu Xiao", "ErShou Rose", "Hu Mage"};
    print(musicians, LEN);
    SelectionSort(musicians, LEN);
    printf("\n");
    print(musicians, LEN);
    return 0;
}
void SelectionSort(const char *str[], int len)
{
    for (int i = 0; i < len; ++i) {
        int min_index = GetMinIndex(str, i, len);
        // str: char *[]
        // char **
        swap(str + i, str + min_index);
    }
}
int GetMinIndex(const char *str[], int begin, int end)
{
    const char *min = str[begin];
    int min_index = begin;
    for (int i = begin + 1; i < end; ++i) {
        if(strcmp(str[i], min) < 0){
            min = str[i];
            min_index = i;
        }
    }
    return min_index;
}
void swap(const char **str1,const char **str2)
{
    const char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}
void print(const char *str[], int len)
{
    for (int i = 0; i < len; ++i) {
        printf("%s ", str[i]);
    }
}
