//
// Created by zy337 on 2023/12/8.
//
#include <stdio.h>
// arg: argument
// c: count
// v: vector
// argv[0]: the name of program
// argv[1 . . argv - 1]: command line arguments
// argv[argc]: NULL
/* @brief program/command-line arguments
 * @param argc count the number of arguments
 * @param argv v: vector
 *  argv[0]: program name
 *  argv[1 .. argc - 1]:
 *  argv[argc]: NULL*/
int main(int argc, char *argv[]) {
    // for (int i = 1; i < argc; i++) {
    //   printf("%s\n", argv[i]);
    // }

    // for (char **ptr = argv + 1; *ptr != NULL; ptr++) {
    //   printf("%s\n", *ptr);
    // }

    char **ptr = argv;
    // ptr = ptr + 1; *ptr;
    // *++ptr vs. *ptr++
    // *--ptr vs. *ptr--
    while (*++ptr != NULL) {
        printf("%s\n", *ptr);
    }

    return 0;
}