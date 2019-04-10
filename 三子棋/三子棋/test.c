#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<time.h>
#include"game.h"
void menu()
{
	printf("********************\n");
	printf("***   1.play   *****\n");
	printf("***   0.exit   *****\n");
	printf("********************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	IntBoard(board, ROW, COL);
	DisplatBoard(board, ROW, COL);
	while (1)
	{
     player_move(board, ROW, COL);
	 DisplatBoard(board, ROW, COL);
	 ret=iswin(board, ROW, COL);
	 if (ret != 'C')
	 {
		 break;
	 }
	 computer_move(board, ROW, COL);
	 DisplatBoard(board, ROW, COL);
	 ret = iswin(board, ROW, COL);
	 if (ret != 'C')
	 {
		 break;
	 }
	}	
	if (ret == '#')
	{
		printf("���Ӯ��\n");

	}
	else if (ret == '*')
	{
		printf("����Ӯ��\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	system("pause");
	return 0;
}