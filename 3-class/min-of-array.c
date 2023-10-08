//
// Created by zy337 on 2023/10/8.
//
#include <stdio.h>
#define NUM 5
//it happens before the program execution
int main()
{
    //int [5] is not int[]
    //int [3] is not int[], the kind is different, we can't assign a value to each other
    //[]: array subscripting operator
    /*variable-length array:
     * const int NUM = 5;
     * int numbers[NUM]*/
    //int i (scope) restrict the variable's extent
    int numbers[NUM] = { 0 };
    for(int i = 0; i < NUM; i++)
    {
        scanf("%d", &numbers[i]);
    }
    int min = numbers[0];
    for(int i = 1; i < 5; i++)
    {
        if(numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    printf("min = %d\n", min);
    return 0;
}