//
// Created by zy337 on 2023/11/10.
//
//You can't even call main itself
#include <stdio.h>
int main(int argc, char *argv[])
{
    if(argc == 1)
        return 0;
    printf("%s\n", argv[argc - 1]);
    main(argc - 1, argv);
    return 0;
}