1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void chart(int i, int j, int input)
{
	printf("������һ������");
	scanf("%d", &input);
	for (i = 1; i <= input; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d*%d=%3d ", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int i = 0;
	int j = 0;
	int input = 0;
	chart(i, j, input);
	system("pause");
	return 0;
}

2.ʹ�ú���ʵ���������Ľ�����
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void swap(int *a, int *b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	scanf("%d%d", &a, &b);
	swap(&a,&b);
	printf("%d,%d",a,b);
	system("pause");
	return 0;
}
3.ʵ��һ�������ж�year�ǲ������ꡣ
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void is_leapyear(int year)
{
	while (1)
	{
		scanf("%d", &year);
		if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
		{
			printf("%d������\n", year);
		}
		else
		{
			printf("��������\n");
		}
	}
}
int main()
{
	int year = 0;
	is_leapyear(year);
	system("pause");
	return 0;
}
����һ�����飬
ʵ�ֺ���init������ʼ�����顢
ʵ��empty����������顢
ʵ��reverse���������������Ԫ�ص����á�
Ҫ���Լ���ƺ����Ĳ���������ֵ��
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void init(int a[], int sz)
{
	int i = 0;
	for (i = 1; i <= sz; i++)
	{
		a[i] = i;
		printf("%d ", a[i]); 
	}
	printf("\n");
}
void empty(int a[], int sz)
{
	int i = 0;
	for (i = 1; i <=sz; i++)
	{
		a[i] = 0;
		printf("%d ", a[i]); 
	}
	printf("\n");
}
void reverse(int a[], int left, int sz)
{
	int i = 0;
	int right = sz;
	int tmp = 0;
	for (i = 1; i <=sz; i++)
	{
		while (left <= right)
		{
			tmp = a[left]; 
			a[left] = a[right];
			a[right] = tmp;
			left++;
			right--;
		}
		printf("%d ", a[i]);
	}
	printf("\n");
}
int main()
{
	int a[] = { 1,2,3,4,5 };
	int left = 1;
	int as = sizeof(a) / sizeof(a[0]);
	init(a, as);
	reverse(a, left, as);
	empty(a, as);
	system("pause");
	return 0;
}
5.ʵ��һ���������ж�һ�����ǲ���������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int judge_prime(int n)
{
	int i = 0;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return -1;
	}
	return 0;//ִ����ѭ����û��ģΪ����� ���Ǹ����� ����0
}
int main()
{
	int num = 0;
	int result = 0;
	printf("������һ�����֣�");
	scanf("%d", &num);
	result = judge_prime(num);
	if (result == 0)
		printf("%d������\n", num);
	else
		printf("%d��������\n", num);
	system("pause");
	return 0;
}