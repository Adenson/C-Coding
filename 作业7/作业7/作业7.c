1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
#define _CRT_SECURE_NO_WARNINGS 1//�ݹ鷨
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
	printf("������һ�����֣�");
	scanf("%d", &n);
	ret = fib(n);
	printf("��%d��쳲��������ǣ�%d\n", n, ret);
	printf("%d\n", count);//ͳ�Ƽ����n��쳲����������˶��ٴ�fib(3)
	system("pause");
	return 0;
}
���n��쳲����������ǵݹ鷽��
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
.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
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
3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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
	printf("����һ������:\n");
	scanf("%d", &a);
	ret = DigitSum(a);
	printf("%d\n",ret);
	system("pause");
	return 0;
}
4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
/*ʵ�֣��������ַ����е��ַ��������С�
Ҫ�󣺲���ʹ��C�������е��ַ�����������*/��
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
5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
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
5.���ַ����ĳ���,�ݹ�
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int my_strlen(char* str)//������a�ĵ�ַ
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
6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
#define _CRT_SECURE_NO_WARNINGS 1//�ǵݹ�
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
	printf("������һ�����֣�");
	scanf("%d", &n);
	ret = fac(n);
	printf("%d", ret);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1//�ݹ�
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
	printf("������һ�����֣�");
	scanf("%d", &n);
	ret = fac(n);
	printf("%d", ret);
	system("pause");
	return 0;
}
7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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