//
// Created by zy337 on 2024/1/1.
//
#include <stdio.h>
#include <string.h>
int num[100002];
void add(int *num1, int index, int count){
    if(count == 0){
        num1[0] = index;
    }else{
        if(index <= num1[count - 1]){
            num1[count] = index;
        }else if(num1[0] <= index){
            for(int i = count; i >= 1; i --){
                num1[i] = num1[i - 1];
            }
            num1[0] = index;
        }else{
            int digit;
            for (int i = 1; i < count; ++i) {
                if(index >= num1[i] && index <= num1[i - 1]){
                    digit = i;
                    break;
                }
            }
            for (int i = count; i >= digit; i--) {
                num1[i] = num1[i - 1];
            }
            num1[digit] = index;
        }
    }
}
int main(){
    int Q, n;

    scanf("%d%d", &Q, &n);
    int count = 0;
    while(Q --){
        char operation[11] = "";
        int index;
        scanf("%11s%d", operation, &index);
        if(strcmp(operation, "Add") == 0){
            add(num, index, count);
            count ++;
        }else if(strcmp(operation, "Query") == 0){
            if(index > count){
                printf("No Answer\n");
            }else{
                printf("%d\n", num[index - 1]);
            }
        }else{
            printf("%s\n", operation);
        }
    }
    return 0;
}