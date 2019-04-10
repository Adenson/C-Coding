#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void IntBoard(char board[ROW][COL], int row, int col)
{
	memset(board, ' ', row*col);
}
void  DisplatBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j<col - 1)
				printf("!");

		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("!");
			}
		}
		printf("\n");
	}
}
void player_move(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("玩家走\n");
	while (1)
	{
		printf("请输入坐标：");
		scanf("%d %d", &i, &j);
		if ((i >= 1 && i <= row) && (j >= 1 && j <= col))
		{
			if (board[i - 1][j - 1] == ' ')
			{
				board[i - 1][j - 1] = '#';
				break;
			}
			else
			{
				printf("坐标被占用\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
}
void computer_move(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("电脑走:>\n");
	while (1)
	{
		i = rand() % 3;
	    j = rand() % 3;
		if (board[i][j] == ' ')
		{
			board[i][j] = '*';
			break;
		}
	}
}
static int isfull( char board[ROW][COL], int row,int col)
{
	int i = 0;
	int j = 0;
	int tem = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			return 0;
		}
	}
	return  1;
}
char iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int rep = 0;
	for (i = 0; i < row; i++)
	{
		rep = 0;
		for (j = 0; j < col - 1; j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j] != ' ')
			{
				;
			}
			else
			{
				rep = 1;
				break;
			}
		}
		if (rep == 0)
		{
			return board[i][j];
		}
	}
	for (i = 0; i < col; i++)
	{
		rep = 0;
		for (j = 0; j < row - 1; j++)
		{
			if (board[j][i] == board[j + 1][i] && board[j][i] != ' ')
			{
				;
			}
			else
			{
				rep = 1;
				break;
			}
		}
		if (rep == 0)
		{
			return board[i][j];
		}
	}
	for (i = 0, j = 0; i < row - 1, j < col - 1; i++, j++)
	 {
		rep = 0;
		if (board[i][j] == board[i + 1][j + 1] && board[i][j] != ' ')
		{
			;
		}
		else
		{
			rep = 1;
			break;
		}
	}
	if (rep == 0)
	{
		return board[i][j];
	}
	for (i = 0, j = col-1; i < row, j >= 0; i++, j--)
	{
		rep = 0;
		if (board[i][j] == board[i + 1][j - 1] && board[i][j] != ' ')
		{
			;
		}
		else
		{
			rep = 1;
			break;
		}
	}
	if (rep == 0)
	{
	  return board[i][j];
	}
	int tmp=isfull(board, ROW, COL);
	if (tmp == 1)
	{
		return 'Q';
	}
	return 'C';
}
