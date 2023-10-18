//
// Created by zy337 on 2023/10/13.
//
#include <stdio.h>

#define LEN 20
int number[LEN] = { 0 };

int main(void)
{
        /*
       * Input the array
       *
       * Note: fails to run this program in "Run" (Ctrl + D)
       * See: https://youtrack.jetbrains.com/issue/CPP-5704
       * Use "Terminal" instead.
       *
       * TODO: CLion; Terminal
       * Linux: Ctrl + D (works now; in the new line, or Ctrl + D twice)
       *   See https://stackoverflow.com/a/21365313/1833118 (send and clear the buffer)
       * Windows: Ctrl + Z (does not work on my platform)
       * TODO: Input&Output redirection
       *   See https://stackoverflow.com/a/11788475/1833118
       */
        int len = -1;
        while (scanf("%d", &number[++len]) != EOF);
        //input failure(EOF, end of file, -1)
        //number of matched items
        for (int i = 0; i < len; i++) {
        printf("%d ", number[i]);
        }
        printf("\n");

      // TODO: selection sort
    for (int i = 0; i < len; ++i) {
        //find the minimum value in number[i..(n - 1)]
        int minimum = number[i];
        int min_index = i;
        for (int j = i + 1; j < len; ++j)
        {
            if(number[i] < minimum){
                minimum = number[i];
                min_index = j;
            }
        }
        //swap the number[i] and number[minimum_index]
        int temp = number[min_index];
        number[min_index] = number[i];
        number[i] = temp;
    }
        return 0;
}