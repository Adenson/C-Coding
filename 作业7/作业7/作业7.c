1.递归和非递归分别实现求第n个斐波那契数。
#define _CRT_SECURE_NO_WARNINGS 1//递归法
#include<stdio.h>
#include<stdlib.h>
int count = 0;
int fib(n)
{
	if (n == 3)
		count++;
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入一个数字：");
	scanf("%d", &n);
	ret = fib(n);
	printf("第%d个斐波拉契数是：%d\n", n, ret);
	printf("%d\n", count);//统计计算第n个斐波拉契数用了多少次fib(3)
	system("pause");
	return 0;
}
求第n个斐波那契数。非递归方法
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	int i = 0;
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		for (i=1;i<=n-2;i++)
	{
		a = b;
		b = c;
		c = a + b;
	}
		return c;
	}
}
.编写一个函数实现n^k，使用递归实现
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int power_function(int n,int k)
{ 
	if (k == 0)
	{
		return 1;
	}
	if (k == 1)
	{
		return n;
	}
	else
	{
		return n * power_function(n,k-1 );
	} 
}
int main()
{
	int n = 0;
	int k = 0;
	int ret = 0;
	scanf("%d %d", &n,&k);
	ret = power_function(n,k);
	printf("%d", ret);
	system("pause");
	return 0;
}
3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int DigitSum(int n)
{
	if (n != 0)
	{
	  return (n % 10) + DigitSum(n / 10);
	}
	else
	{
      return 0;
	}
}
int main()
{
	int a = 0;
	int ret = 0;
	printf("输入一个整数:\n");
	scanf("%d", &a);
	ret = DigitSum(a);
	printf("%d\n",ret);
	system("pause");
	return 0;
}
4. 编写一个函数 reverse_string(char * string)（递归实现）
/*实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中的字符串操作函数*/。
#include <stdio.h>
#include <assert.h>
void reverse_string(char const * string)
{
	assert(string != NULL);
	if (*string != '\0')
	{
		string++;
		reverse_string(string);
		printf("%c ", *(string - 1));
	}
}
int main()
{
	reverse_string("abc");
	system("pause");
	return 0;
}
5.递归和非递归分别实现strlen
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	int len = 0;
    len= my_strlen("abcdef");
	printf("%d", len);
	system("pause");
	return 0;
}
5.求字符串的长度,递归
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int my_strlen(char* str)//传的是a的地址
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int let = 0;
	let= my_strlen("abcdef");
	printf("%d\n", let);
	system("pause");
	return 0;
}
6.递归和非递归分别实现求n的阶乘
#define _CRT_SECURE_NO_WARNINGS 1//非递归
#include<stdio.h>
#include<stdlib.h>
int fac(int n)
{
	int i = 0;
	int sum = 1;
	for (i = 1; i <= n; i++)
	{
		sum = sum*i;
	}
	return sum;
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入一个数字：");
	scanf("%d", &n);
	ret = fac(n);
	printf("%d", ret);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1//递归
#include<stdio.h>
#include<stdlib.h>
int fac(int n)
{
	if (n == 1)
		return 1;
	else
		return n*fac(n - 1);
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入一个数字：");
	scanf("%d", &n);
	ret = fac(n);
	printf("%d", ret);
	system("pause");
	return 0;
}
7.递归方式实现打印一个整数的每一位
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	print(a);
	system("pause");
	return 0;
}