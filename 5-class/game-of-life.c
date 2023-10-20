//
// Created by zy337 on 2023/10/20.
//
//Cellular Automata:元胞自动机
//Any live cell with two or three live neighbours survives.
//All other live cells die in the next generation.

//Any dead cell with three live neighbours becomes a live cell.
//All other dead cells stay dead.
#include <stdio.h>
#include <windows.h>
#define SIZE 6
const int board[SIZE][SIZE] = {
        { 0 },
        { 0, 1, 1, 0, 0, 0 },
        { 0, 1, 1, 0, 0, 0 },
        { 0, 0, 0, 1, 1, 0 },
        { 0, 0, 0, 1, 1, 0 },
        { 0 }
};
/*const int board[SIZE][SIZE] = {
 * [1][1] = 1, [1][2] = 1,
 * [2][1] = 1, [2][2] = 1,
 * [3][3] = 1, [3][4] = 1,
 * [4][3] = 1, [4][4] = 1,
 * }*/
int main()
{
    int old_board[SIZE + 2][SIZE + 2] = { 0 };
    for (int row = 1; row <= SIZE; row ++)
    {
        for(int col = 1; col <= SIZE; col ++)
        {
            old_board[row][col] = board[row - 1][col - 1];
        }
    }
    //print the initial board
    for (int row = 1; row <= SIZE; row ++)
    {
        for(int col = 1; col <= SIZE; col ++)
        {
            printf("%c ", old_board[row][col] ? '*' : ' ');
        }
        printf("\n");
    }
    //old_board = apply the rule > new_board
    int new_board[SIZE + 2][SIZE + 2] = { 0 };
    for (int i = 0; i < 10; i ++) {
        for (int row = 1; row <= SIZE; row++) {
            for (int col = 1; col <= SIZE; col++) {
                //count the live cells in the neighbour board[i][j]
                int neighbors =
                        old_board[row - 1][col - 1] +
                        old_board[row][col - 1] +
                        old_board[row - 1][col] +
                        old_board[row - 1][col + 1] +
                        old_board[row][col + 1] +
                        old_board[row + 1][col - 1] +
                        old_board[row + 1][col] +
                        old_board[row + 1][col + 1];
                //apply the rule
                if (old_board[row][col]) {
                    new_board[row][col] = (neighbors == 2 || neighbors == 3);
                } else {
                    new_board[row][col] = (neighbors == 3);
                }
            }
        }
        //Linux: unist.h
        //sleep (1); (if use the Linux)
        //Windows: windows.h
        Sleep (1000);
        //Linux: stdlib.h
        //system ("clear"); (if use the Linux)
        //Windows: stdlib.h
        system ("cls");
        for (int row = 1; row <= SIZE; row++) {
            for (int col = 1; col <= SIZE; col++) {
                printf("%c ", new_board[row][col] ? '*' : ' ');
            }
            printf("\n");
        }
        for (int row = 1; row <= SIZE; row++) {
            for (int col = 1; col <= SIZE; col++) {
                old_board[row][col] = new_board[row][col];
            }
        }
    }
    return 0;
}



