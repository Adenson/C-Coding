1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
#define _CRT_SECURE_NO_WARNINGS 1//�ݹ�
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
	printf("������һ�����֣�");
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
	printf("������һ������");
	scanf("%d", &num);
	int ret= fib(num);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
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

3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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

4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������С�
Ҫ�󣺲���ʹ��C�������е��ַ�������������
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

5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
#define _CRT_SECURE_NO_WARNINGS 1//�ݹ�
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
	let = my_strlen("abcdef");
	printf("%d\n", let);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1//�ǵݹ�
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