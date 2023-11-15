//
// Created by zy337 on 2023/9/20.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    printf("The computer will generate a random number(1-100) and you have 5 chances:\n");
    srand(time(NULL));
    int a=rand()%100+1, guess, sum=0, chance=5;
    do{
        chance --;
        sum ++;
        printf("Please input your guess number:");
        scanf("%d",&guess);
        if(guess>a&&chance>0){
            printf("Guess number is bigger!You still have %d chances!\n",chance);
        }
        else if(guess<a&&chance>0){
            printf("Guess number is smaller!You still have %d chances!\n",chance);
        }
        else if(guess==a&&chance>0){
            printf("Congratulations!But there is no reward...\n");
            break;
        }
        else if(chance==0){
            printf("You already have no chance!\n");
        }
    }while(chance>=0);
    if(sum<5){
        printf("You have guessed %d times!\n",sum);
    }
    else{
        printf("You have failed!\n");
    }
    return 0;
}