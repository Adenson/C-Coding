#define _CRT_SECURE_NO_WARNINGS 1
1. 给定两个整形变量的值，将两个值的内容进行交换。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}
2. 不允许创建临时变量，交换两个数的内容（附加题）
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a,&b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d", a, b);
	system("pause");
	return 0;
}
2. 不允许创建临时变量，交换两个数的内容（附加题）
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a, b);
	system("pause");
	return 0;
}
3.求10 个整数中最大值。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int max = arr[0];
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	system("pause");
	return 0;
}
4.将三个数按从大到小输出。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int t = 0;
	printf("请输入三个数;");
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
			t = a;
		    a = b;
			b = t;
	} 
	if (a < c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("%d,%d,%d",a, b, c);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void swap(int *px, int*py)//当实参传给形参的时候，行参是实参的一份临时拷贝
{
	int temp = *px;
	*px = *py;
	*py = temp;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入三个数;");
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		swap(&a,& b);
	} 
	if (a < c)
	{
		swap(&a,&c);
	}
	if (b < c)
	{
		swap(&b,&c);
	}
	printf("%d,%d,%d",a, b, c);
	system("pause");
	return 0;
}
5.求两个数的最大公约数。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	int temp = 0;
	scanf("%d %d", &a, &b);
	while(a%b!= 0)
	{
		temp = a%b;
		a = b;
		b = temp;
	}
	printf("%d\n", temp);
	system("pause");
     return 0;
}
