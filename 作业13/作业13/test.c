//1.��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
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
	 while ((start < end) && arr[start] % 2 != 0)//��ǰ�����ҵ�һ��ż��
	{
		++start;
	}
	while ((start < end) && arr[end] % 2 != 1)//�Ӻ���ǰ�ҵ�һ������
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
	printf("������ %d����\n",N);
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
////���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
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
				printf("%d���������������\n", num);
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
	printf("��������Ҫ���ҵ�����:>");
	scanf("%d",&num);
	find(arr,num);
	system("pause");
	return 0;
}