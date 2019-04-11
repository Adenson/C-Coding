1. 5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
a选手说：b第二，我第三；
b选手说：我第二，e第四；
c选手说：我第一，d第二；
d选手说：c最后，我第三；
e选手说：我第四，a第一；
比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3) == 1) && ((b == 2) + (e==4))
							&& ((c == 1) + (d == 2)) && ((c == 5) + (e == 3)) &&
							((e == 4) + (a == 1)))
						{
							if ((a*b*c*d*e) == 120)//不同数的乘积是个定值
							{
								printf("A=%d B=%d C=%d D=%d E=%d\n", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}
2.
日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
嫌疑犯的一个。以下为4个嫌疑犯的供词。
a说：不是我。
b说：是c。
c说：是d。
d说：c在胡说
已知3个人说了真话，1个人说的是假话。
现在请根据这些信息，写一个程序来确定到底谁是凶手。
#define _CRT_SECURE_NO_WARNINGS 1//方法1
#include<stdio.h>
#include<stdlib.h>
void predict(int killer)
{
	for (killer = 1; killer <= 4; killer++)
	{
		if ((1 != killer) + (3 == killer) + (4 == killer) + (4 != killer) == 3)
		{
			printf("凶手是%c\n", killer+'A'-1);
		}
	}
}
int main()
{
	int killer = 0;
	predict(killer);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1//方法2
#include<stdio.h>
#include<stdlib.h>
void predict(char killer)
{
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')==3)
		{
			printf("凶手是%c\n", killer);
		}
	}
}
int main()
{
	char killer = 0;
	predict(killer);
	system("pause");
	return 0;
}



3.在屏幕上打印杨辉三角。
1
1 1
1 2 1
1 3 3 1
#define _CRT_SECURE_NO_WARNINGS 1//方法2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 5
int main()
{
	int arr[N][N] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < N; i++)
	{
		arr[i][0] = arr[i][i] = 1;
	}
	for (i = 2; i < N; i++)
	{
		for (j = 1; j <= i; j++)
		{
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}
	int k = 0;
	for (i = 0; i < N; i++)
	{
		for (k = N - i-1; k>0; k--)
		{
			printf(" ");
		} 
		for (j = 0; j <= i; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
