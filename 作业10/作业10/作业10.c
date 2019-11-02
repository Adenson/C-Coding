1.写一个函数返回参数二进制中 1 的个数
比如： 15 0000 1111 4 个 1
程序原型：
int count_one_bits(unsigned int value)
{
	 返回 1的位数 
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int count_one_bits(unsigned int value)
{
	int count = 0;
	while (value)
	{
		if (value % 2 ==1)
		{
			count++;	
		}
		value = value / 2;
	}
	return count;
}
int main()
{
	int num = 0;
	int ret = 0;
	printf("请输入一个数:");
	scanf("%d", &num);
	ret=count_one_bits(num);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int count_one_bits(unsigned int value)
{
	int count = 0;
	int i = 32;
	while (i)
	{
		if (value & 1 == 1)
		{
			count++;	
		}
		value = value >> 1;
		i--;
	}
	return count;
}
int main()
{
	int num = 0;
	int ret = 0;
	printf("请输入一个数:");
	scanf("%d", &num);
	ret = count_one_bits(num);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
2.获取一个数二进制序列中所有的偶数位和奇数位，
分别输出二进制序列。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int num = 0;
	int ret = 0;
	scanf("%d", &num);
    printf("奇数序列为：");
	for (i = 31; i >= 0; i -= 2)
	{
		ret = (num >> i) & 1;
		printf("%d ",ret );
	}
	printf("\n");
	  printf("偶数序列为：");
	for (i = 30; i >= 0; i -=2 )
	{
		ret = (num >> i) & 1;
		printf("%d ", ret);
	}
	system("pause");
	return 0;
}
3. 输出一个整数的每一位。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int print(int num)
{
	if (num > 9)
	{
		print(num / 10);
	}
	printf("%d ", num % 10);
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	print(num);
	system("pause");
	return 0;
}
4.编程实现：
两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
输入例子 :
1999 2299
输出例子 : 7
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a = 0;
    int b = 0;
	int c = 0;
	scanf("%d %d", &a, &b);
	c = a^b;//有多少个1，就有多少位不一样
	int i = 0;
	int ret = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		ret = (c>>i) & 1;
		if (ret == 1)
		{
			count=count+1;
		}	
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}
5.写博客总结C语言操作符，博客链接发给我，并分享到群里。
https://blog.csdn.net/Adenson/article/details/88974503