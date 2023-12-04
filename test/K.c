//
// Created by zy337 on 2023/12/2.
//
#include <stdio.h>
int lemonadeChange(int *bills, int n) {
    int five = 0, ten = 0;
    for (int i = 0; i < n; i++) {
        int bill = bills[i];
        if (bill == 5) {
            five++;
        } else if (bill == 10) {
            if (five == 0) {
                return 0;
            }
            five--;
            ten++;
        } else {
            if (five > 0 && ten > 0) {
                five--;
                ten--;
            } else if (five >= 3) {
                five -= 3;
            } else {
                return 0;
            }
        }
    }
    return 1;
}
int main() {
    int n;
    scanf("%d", &n);
    int bills[1005];
    for (int i = 0; i < n; i++) {
        scanf("%d", &bills[i]);
    }
    int result = lemonadeChange(bills, n);
    if (result) {
        printf("true");
    } else {
        printf("false");
    }
    return 0;
}