//
// Created by zy337 on 2023/12/1.
//
#include <stdio.h>
#include <malloc.h>
#include <string.h>
void Strcpy1(char *dest, const char *src)
{
    int i = 0;
    while(src[i] != '\0'){
        dest[i] = src[i];
        i ++;
    }
    dest[i] = '\0';
}
void Strcpy2(char *dest, const char *src)
{
    int i = 0;
    while((dest[i] = src[i]) != '\0'){
        i ++;
    }
}
void Strcpy3(char *dest, const char *src)
{
    int i = 0;
    while((*(dest + i) = *(src + i)) != '\0'){
        i ++;
    }
}
void Strcpy4(char *dest, const char *src)
{
    while((*dest = *src) != '\0'){
        dest ++;
        src ++;
    }
}
void Strcpy5(char *dest, const char *src)
{
    //dest ++: dest + 1; evaluated to dest
    //*++ dest: *(dest + 1)
    while((*dest++ = *src++) != '\0');
}
//Not Recommend!!!!!
void Strcpy6(char *dest, const char *src)
{
    //NULL: null pointer; (void *) 0
    //'\0': NULL; 0
    while((*dest++ = *src++));
}
char StrCpyStd(char *dest, const char *src)
{
    for(char *s = dest; (*s++ = *src++) != '\0';);
}
int main()
{
    const char *src = "Hello World!";
    char *dest = malloc(strlen(src) + 1);
    StrCpyStd(dest, src);
    printf("dest = %s\n", dest);
    free(dest);
    return 0;
}