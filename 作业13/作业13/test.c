//1.调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define N 5
void adjust(int arr[], int sz)
{
	int start = 0;
	int end = sz - 1;
	while (start < end)
	{
	 while ((start < end) && arr[start] % 2 != 0)//从前往后找第一个偶数
	{
		++start;
	}
	while ((start < end) && arr[end] % 2 != 1)//从后往前找第一个奇数
	{
		--end;
	}
	if (start < end)
	{
		arr[start] = arr[start] ^ arr[end];
		arr[end] = arr[start] ^ arr[end];
		arr[start] = arr[start] ^ arr[end];
	}
	}
}
int main()
{
	int i = 0;
	int arr[N];
	printf("请输入 %d个数\n",N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	adjust(arr, N);
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
//2.
////杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void find(int (*arr)[3] ,int num)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (arr[i][j] == num)
			{
				printf("%d存在于这个数组中\n", num);
				continue;
			}	
		}
	}
}
void sort(int arr[][3])
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (k = 0; k < 2; k++)
	{
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3 - 1; j++)
			{
				if (arr[i][j]>arr[i][j + 1])
				{
					arr[i][j] = arr[i][j] ^ arr[i][j + 1];
					arr[i][j + 1] = arr[i][j] ^ arr[i][j + 1];
					arr[i][j] = arr[i][j] ^ arr[i][j + 1];
				}
			}
		}
	}
	for (k = 0; k < 2; k++)
	{
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3-1; j++)
			{
				if (arr[j][i] > arr[j + 1][i] )
				{
					arr[j + 1][i] = arr[j + 1][i] ^ arr[j][i];
					arr[j][i] = arr[j + 1][i] ^ arr[j][i];
					arr[j + 1][i] = arr[j + 1][i] ^ arr[j][i];
				}
			}
		}
	}
	for (i = 0; i < 3 ; i++)
	{
		for (j = 0; j < 3 ; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][3] = { 9, 6, 3, 8, 5, 2, 7, 4, 1 };
	int num = 0;
	sort(arr);
	printf("请输入你要查找的数字:>");
	scanf("%d",&num);
	find(arr,num);
	system("pause");
	return 0;
}