1.递归和非递归分别实现求第n个斐波那契数。
#define _CRT_SECURE_NO_WARNINGS 1//递归
#include<stdio.h>
#include<stdlib.h>
int fib(int a)
{
	if (a == 1 || a == 2)
	{
		return 1;
	}
	else
	{
		return fib(a - 1) + fib(a - 2);
	}
}
int main()
{
	printf("请输入一个数字：");
	int a = 0;
	scanf("%d", &a);
	int ret=fib(a);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
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
		for (i = 1; i <= n - 2; i++)
		{
			a = b;
			b = c;
			c = a + b;
		}
		return c;
	}
}
int main()
{
	int num = 0;
	printf("请输入一个数：");
	scanf("%d", &num);
	int ret= fib(num);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

2.编写一个函数实现n^k，使用递归实现
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int pow(int n, int k)
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
		return n*(pow(n, k - 1));
	} 
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d",&a,&b);
	int ret=pow(a,b);
	printf("%d", ret);
	system("pause");
	return 0;
}

3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int DigitSum(int num)
{
	if (num != 0)
	{
		return (num % 10) + DigitSum(num / 10);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = DigitSum(num);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

4. 编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中的字符串操作函数。
#define _crt_secure_no_warnings 1
#include<stdio.h>
#include<stdlib.h>
int strlen(char *str)
{
	int count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}
void reverse_string(char* str)
{
	if (*str)
	{
		int len = strlen(str);
		char tmp = str[0];
		str[0] = str[len - 1];
		str[len - 1] = '\0';
		reverse_string(str + 1);
		str[len - 1] = tmp;
	}
}
int main()
{
	char str[] = "abcde";
	reverse_string(str);
	printf("%s\n", str);
	system("pause");
	return 0;
}

5.递归和非递归分别实现strlen
#define _CRT_SECURE_NO_WARNINGS 1//递归
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
	let = my_strlen("abcdef");
	printf("%d\n", let);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1//非递归
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
	char arr[] = "abcdef";
	int len = strlen(arr);
	printf("%d", len);
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