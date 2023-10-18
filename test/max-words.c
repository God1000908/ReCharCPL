//
// Created by zy337 on 2023/10/12.
//
#include <stdio.h>
int main()
{
    char num[100];
    int hash[256];
    int middle = 0;
    char mm;
    for(int i = 0; i < 100; i++)
    {
        scanf("%c", &num[i]);
    }
    for(int i = 0; i < 100; i++)
    {
        if(num[i] >= 'a'&&num[i] <= 'z'&&num[i] == num[i+1])
        {
            mm = num[i];
            hash['mm'] ++;
        }
    }
    for(int i = 0; i < 100; i++)
    {
        if(middle < hash['mm'])
            middle = hash['mm'];
    }
    for(int i = 0; i < middle; i++)
    {
        printf("%c", mm);
    }
}