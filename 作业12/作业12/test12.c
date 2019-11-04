//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值是value的二进制位模式从左到右翻转后的值。
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
#define _CRT_SECURE_NO_WARNINGS 1(方法1)
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	int sum = 0;
	for (i = 0; i < 31; i++)
	{
		sum = sum + (((value >> i) & 1)*pow(2, 32 - i - 1));
	}
	return sum;
}
int main()
{
	int value = 0;
	scanf("%d", &value);
	printf("%u\n", reverse_bit(value));
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1(方法2)
#include<stdio.h>
#include<stdlib.h>
unsigned int reverse_bit(unsigned int value)
{
	int sum = 0;
	int i = 0;
	for (i = 1; i<=32; i++)
	{
	  sum <<= 1;
	  sum |= ((value >>(i-1) & 1));
	}
	return sum;
}
int main()
{
	int value = 0;
	scanf("%d", &value);
	printf("%u\n", reverse_bit(value));
	system("pause");
	return 0;
}
//2.不使用（a + b） / 2这种方式，求两个数的平均值。
#define _CRT_SECURE_NO_WARNINGS 1(方法1)
#include<stdio.h>
#include<stdlib.h>
int average(int num1,int num2)
{
		return num1 +((num2 - num1) >> 1);
}
int main()
{
	int num1, num2;
	scanf("%d %d", &num1,&num2);
	int ret = average(num1, num2);
	printf("%d",ret);
	system("pause"); 
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1(方法2)
#include<stdio.h>
#include<stdlib.h>
int average(int num1, int num2)
{
	return (num1&num2) + ((num1^num2) >> 1);
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	printf("%d\n",average(num1, num2));
	system("pause");
	return 0;
}
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define N 11
int main()
{
	int arr[N];
	int i = 0;
	int ret = 0;
	printf("请输入%d个数\n",N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < N; i++)
	{
		ret = ret^arr[i];//X^X=0,X^0=X
	}
	printf("%d\n",ret);
	system("pause");
	return 0;
}
//4.
//有一个字符数组的内容为:"student a am i",
//请你将数组的内容改为"i am a student".
//要求：
//不能使用库函数。
//只能开辟有限个空间（空间个数和字符串的长度无关）。
//student a am i
//i ma a tneduts
//i am a student
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse_str(char* str,char* end)
{
	/*for (int i = 0; i < len / 2; i++)
	{
		char tmp = str[i];
		str[i] = str[len-1-i];
		str[len-1-i] = tmp;
	}*/
	while (str < end)
	{
		char tmp = *str;
		*str = *end;
		*end = tmp;
		--end ;
		++str;
	}
}
void reverse(char* str)
{
	int len = strlen(str);
	reverse_str(str, str + len - 1);//整体逆转
	while (*str)//局部逆转
  {	
		char *start = str;
		while (*str != ' '&&*str != '\0')//获取单词的结束
	{
		str++;
	}
	reverse_str(start, str - 1);//单词的逆转
	   while (*str == ' ')//移动到下一个单词的起始位置
	{
		++str;
	}
  }
}
int main()
{
	char str[100];
	gets(str);
	reverse(str);	
	printf("%s\n", str);
	system("pause");
	return 0;
}