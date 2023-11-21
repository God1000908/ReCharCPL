//
// Created by zy337 on 2023/11/19.
//
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int num[2147483];
int sign[2147483];
int count = 1;
int main()
{
    int n = 0;
    int q = 0;
    scanf_s("%d%d", &n, &q);
    num[0] = (int)pow(2.0, (double)n);
    for (int i = 0; i < q; ++i) {
        char a;
        int id = 0;
        int m = 0;
        for (int j = 0; (a = getchar()) != 'Q'; ++j) {
            if(j == 1) {
                scanf_s("%d%d", &id, &m);
                break;
            }
        }
        if(a == 'A'){
            bool flag = true;
            do {
                for (int j = 0; j < count; j++) {
                    if(num[j] >= m&&(num[j] / 2) < m){
                        sign[j] = id;
                        flag = false;
                        num[j] = 0;
                        break;
                    }
                    else if((num[j] / 2) >= m){
                        int l = count;
                        int index = j;
                        for (int k = l; k >= index + 1; --k) {
                            num[k] = num[k - 1];
                            sign[k] = sign[k - 1];
                        }
                        num[index] /= 2;
                        num[index + 1] = num[index];
                        count ++;
                        break;
                    }

                }
            }while(flag);
        }
        else if(a == 'Q'){
            printf("%d\n", count);
            for (int j = 0; j < count; ++j) {
                if(sign[j] == 0)
                    printf("0 ");
                else
                    printf("%d ", sign[j]);
            }
            printf("\n");
        }
    }
    return 0;
}
