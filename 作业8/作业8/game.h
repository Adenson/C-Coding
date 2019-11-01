#include<stdio.h>
#include<string.h>
#define ROW 3
#define COL 3
void IntBoard(char board[ROW][COL], int row, int col);
void DisplatBoard(char board[ROW][COL], int row, int col);
void player_move(char board[ROW][COL], int row, int col);
void computer_move(char board[ROW][COL], int row, int col);
char iswin(char board[ROW][COL], int row, int col);