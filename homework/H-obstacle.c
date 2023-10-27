//
// Created by zy337 on 2023/10/27.
//
#include <stdio.h>
#define MAX 200005
#define RIGHT_MAX 10e9
#define UP_MAX 10e9
long long xa, xb, xc, ya, yb, yc;
long long count = 0;
long long num[MAX] = { 0 };
int main()
{
    scanf("%lld%lld%lld%lld%lld%lld", &xa, &ya, &xb, &yb,&xc, &yc);
    if(xa == xc&&xb == xc&&((yc > ya&&yc < yb)||(yc < ya&&yc > yb))){
        if(xa == RIGHT_MAX) {
            num[count] = 3;
            count++;
            while (ya != yb) {
                if (ya < yb) {
                    ya++;
                    num[count] = 1;
                    count++;
                } else {
                    ya--;
                    num[count] = 2;
                    count++;
                }
                num[count] = 4;
                count++;
            }
        }else{
            num[count] = 4;
            count ++;
            while (ya != yb) {
                if (ya < yb) {
                    ya++;
                    num[count] = 1;
                    count++;
                } else {
                    ya--;
                    num[count] = 2;
                    count++;
                }
            }
            num[count] = 3;
            count ++;
        }
    }else if(ya == yc&&yb == yc&&((xc > xa&&xc < xb)||(xc < xa&&xc > xb))){
        if(ya == UP_MAX){
            num[count] = 2;
            count ++;
            while(xa != xb) {
                if (xa < xb) {
                    xa++;
                    num[count] = 4;
                    count++;
                } else {
                    xa--;
                    num[count] = 3;
                    count++;
                }
            }
            num[count] = 1;
            count ++;
        }else{
            num[count] = 1;
            count ++;
            while(xa != xb) {
                if (xa < xb) {
                    xa++;
                    num[count] = 4;
                    count ++;
                } else {
                    xa--;
                    num[count] = 3;
                    count ++;
                }
            }
            num[count] = 2;
            count ++;
        }
    }else if(xa != xc&&xb != xc) {
        if (ya == yc) {
            while (ya != yb) {
                if (ya < yb) {
                    ya++;
                    num[count] = 1;
                    count++;
                } else {
                    ya--;
                    num[count] = 2;
                    count++;
                }
            }
            while (xa != xb) {
                if (xa < xb) {
                    xa++;
                    num[count] = 4;
                    count++;
                } else {
                    xa--;
                    num[count] = 3;
                    count++;
                }
            }
        }else{
            while (xa != xb) {
                if (xa < xb) {
                    xa++;
                    num[count] = 4;
                    count++;
                } else {
                    xa--;
                    num[count] = 3;
                    count++;
                }
            }
            while (ya != yb) {
                if (ya < yb) {
                    ya++;
                    num[count] = 1;
                    count++;
                } else {
                    ya--;
                    num[count] = 2;
                    count++;
                }
            }
        }
    }else if(ya != yc&&yb != yc){
        if(xa ==xc){
            while (xa != xb) {
                if (xa < xb) {
                    xa++;
                    num[count] = 4;
                    count++;
                } else {
                    xa--;
                    num[count] = 3;
                    count++;
                }
            }
            while (ya != yb) {
                if (ya < yb) {
                    ya++;
                    num[count] = 1;
                    count++;
                } else {
                    ya--;
                    num[count] = 2;
                    count++;
                }
            }
        }else{
            while (ya != yb) {
                if (ya < yb) {
                    ya++;
                    num[count] = 1;
                    count++;
                } else {
                    ya--;
                    num[count] = 2;
                    count++;
                }
            }
            while (xa != xb) {
                if (xa < xb) {
                    xa++;
                    num[count] = 4;
                    count++;
                } else {
                    xa--;
                    num[count] = 3;
                    count++;
                }
            }
        }
    }else if(xa == xc&&yb == yc){
        while (xa != xb) {
            if (xa < xb) {
                xa++;
                num[count] = 4;
                count++;
            } else {
                xa--;
                num[count] = 3;
                count++;
            }
        }
        while (ya != yb) {
            if (ya < yb) {
                ya++;
                num[count] = 1;
                count++;
            } else {
                ya--;
                num[count] = 2;
                count++;
            }
        }
    }else if(ya == yc&&xb == xc){
        while (ya != yb) {
            if (ya < yb) {
                ya++;
                num[count] = 1;
                count++;
            } else {
                ya--;
                num[count] = 2;
                count++;
            }
        }
        while (xa != xb) {
            if (xa < xb) {
                xa++;
                num[count] = 4;
                count++;
            } else {
                xa--;
                num[count] = 3;
                count++;
            }
        }
    }
    printf("%lld\n", count);
    for(int i = 0; i < count; i ++)
    {
        if(num[i] == 1)
            printf("U");
        if(num[i] == 2)
            printf("D");
        if(num[i] == 3)
            printf("L");
        if(num[i] == 4)
            printf("R");
    }

    return 0;
}