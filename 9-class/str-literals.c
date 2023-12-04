//
// Created by zy337 on 2023/12/1.
//
#include <stdio.h>
int main()
{
    char msg[] = "Hello World!";
    msg[0] = 'N';
    printf("%s\n", msg);
    //read only memory
    char *ptr_msg = "Hello World!";
    //The wrong signal: -1073741819
    //UB
    //Linux: SIGSEGV
    //SIG: signal; SEGV: segmentation violation
    ptr_msg[0] = 'N';
    printf("%s\n", msg);
    return 0;
}