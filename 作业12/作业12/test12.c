//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
#define _CRT_SECURE_NO_WARNINGS 1(����1)
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
#define _CRT_SECURE_NO_WARNINGS 1(����2)
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
//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
#define _CRT_SECURE_NO_WARNINGS 1(����1)
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
#define _CRT_SECURE_NO_WARNINGS 1(����2)
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
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define N 11
int main()
{
	int arr[N];
	int i = 0;
	int ret = 0;
	printf("������%d����\n",N);
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
//��һ���ַ����������Ϊ:"student a am i",
//���㽫��������ݸ�Ϊ"i am a student".
//Ҫ��
//����ʹ�ÿ⺯����
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
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
	reverse_str(str, str + len - 1);//������ת
	while (*str)//�ֲ���ת
  {	
		char *start = str;
		while (*str != ' '&&*str != '\0')//��ȡ���ʵĽ���
	{
		str++;
	}
	reverse_str(start, str - 1);//���ʵ���ת
	   while (*str == ' ')//�ƶ�����һ�����ʵ���ʼλ��
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