//
// Created by zy337 on 2023/10/13.
//
#include <stdio.h>
#define LEN 10
int  num[LEN] = {1 , 2, 4, 4, 4, 6, 7, 8, 9, 10};
int main()
{
    int key = 0;
    int index = -1;
    scanf("%d", &key);
    int low = 0;
    int high = LEN - 1;
    while(low <= high) {
        int mid = (low + high)/2;
        if (key > num[mid])
            low = mid + 1;
        else if (key < num[mid])
            high = mid - 1;
        else if(key == num[mid]) {
            index = mid;
            high = mid - 1;
        }
    }
    printf("index = %d", index);
    return 0;
}