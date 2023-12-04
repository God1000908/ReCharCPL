//
// Created by zy337 on 2023/12/1.
//
#include <stdio.h>
int Strlen1(const char *str)
//The pointed content can't be changed by alter the pointer.
{
    /*str[0] = '\0';The content can't be changed!
    str ++;The pointer can be changed! You can use const char *const str to protect it. */
    int len = 0;
    while(str[len] != '\0') {
        len ++;
    }
    return len;
}
int Strlen2(const char *str)
{
    int len = 0;
    while(str[len ++] != '\0');
    return len - 1;
}
int Strlen3(const char *str)
{
    int len = -1;
    while(str[++ len] != '\0');
    return len;
}
size_t StrLenStd(const char *str)
{
    const char *sc;
    for(sc = str; *sc != '\0'; ++ sc);
    return sc - str;
}
int main()
{
    char msg[] = "Hello World!";
    return 0;
}