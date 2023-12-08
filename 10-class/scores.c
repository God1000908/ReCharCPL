//
// Created by zy337 on 2023/12/8.
//
#include <stdio.h>
#include <malloc.h>
#define NUM_OF_MUSICIANS 4
#define NUM_OF_SCORES 3
void print(const int table[][NUM_OF_SCORES], int num_of_musicians);
int main()
{
    /*const int scores[NUM_OF_MUSICIANS][NUM_OF_SCORES] = {
            {0, 10, 20},
            {10, 20, 30},
            {20, 30, 40},
            {30, 40, 50},
    };*/
    int rows = 0;
    printf("Please input the number of students: ");
    scanf("%d", &rows);
    int (*scores)[NUM_OF_SCORES] = malloc(rows * NUM_OF_MUSICIANS * sizeof(**scores));
    printf("Please input the scores of these students: ");
    for (int i = 0; i < NUM_OF_MUSICIANS; ++i) {
        for (int j = 0; j < NUM_OF_SCORES; ++j) {
            scanf("%d", &scores[i][j]);
        }
    }
    print(scores, NUM_OF_MUSICIANS);
    free(scores);
    return 0;
}
// table: int table[][COL]
// int table[]: int *table
// int table[][COL]: int (*table)[COL]
void print(const int table[][NUM_OF_SCORES], int num_of_musicians)
{
    for (int i = 0; i < num_of_musicians; ++i) {
        for (int j = 0; j < NUM_OF_SCORES; ++j) {
            // table[i][j]: *(*(table + i) + j)
            // table: int (*)[COL]
            // table + i: int (*)[COL]
            // *(table + i): int *
            // *(table + i) + j: int *
            // *(*(table + i) + j): int
            printf("table[%d][%d]: %d\n", i, j, table[i][j]);
        }
        printf("\n");
    }
}