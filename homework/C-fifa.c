//
// Created by zy337 on 2023/12/20.
//
#include <stdio.h>
double result[1002][3];
char team_name[1002][22];
typedef struct{
    char competitor_name[22];
    int attack;
    int defend;
    int cooperate;
}team;
team team_data[1002];
double average1(const team data[], int x){
    int sum = 0;
    for (int i = 0; i < x; ++i) {
        sum += data[i].attack;
    }
    return (double) sum /(double) x;
}
double average2(const team data[], int x){
    int sum = 0;
    for (int i = 0; i < x; ++i) {
        sum += data[i].defend;
    }
    return (double) sum /(double) x;
}
double average3(const team data[], int x){
    int sum = 0;
    for (int i = 0; i < x; ++i) {
        sum += data[i].cooperate;
    }
    return (double) sum /(double) x;
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%22s", team_name[i]);
        for (int j = 0; j < 11; ++j) {
            scanf("%22s", team_data[j].competitor_name);
            scanf("%d %d %d", &team_data[j].attack, &team_data[j].defend, &team_data[j].cooperate);
        }
        result[i][0] = average1(team_data, 11);
        result[i][1] = average2(team_data, 11);
        result[i][2] = average3(team_data, 11);
    }
    for (int i = 0; i < 3; ++i) {
        int index[1002] = { 0 };
        int digit = 0;
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                if(result[k][i] > result[index[digit]][i]){
                    index[digit] = k;
                }
            }
            result[index[digit]][i] = 0;
            digit ++;
        }
        for (int k = 0; k < n; ++k) {
            printf("%s ", team_name[index[k]]);
        }printf("\n");
    }
    return 0;
}