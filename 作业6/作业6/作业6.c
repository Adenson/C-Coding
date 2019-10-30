1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void chart(int i, int j, int input)
{
	printf("请输入一个数：");
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

2.使用函数实现两个数的交换。
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
3.实现一个函数判断year是不是润年。
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
			printf("%d是闰年\n", year);
		}
		else
		{
			printf("不是闰年\n");
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
创建一个数组，
实现函数init（）初始化数组、
实现empty（）清空数组、
实现reverse（）函数完成数组元素的逆置。
要求：自己设计函数的参数，返回值。
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
5.实现一个函数，判断一个数是不是素数。
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
	return 0;//执行完循环还没有模为零的数 则是个素数 返回0
}
int main()
{
	int num = 0;
	int result = 0;
	printf("请输入一个数字：");
	scanf("%d", &num);
	result = judge_prime(num);
	if (result == 0)
		printf("%d是素数\n", num);
	else
		printf("%d不是素数\n", num);
	system("pause");
	return 0;
}