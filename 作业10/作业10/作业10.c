1.дһ���������ز����������� 1 �ĸ���
���磺 15 0000 1111 4 �� 1
����ԭ�ͣ�
int count_one_bits(unsigned int value)
{
	 ���� 1��λ�� 
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
	printf("������һ����:");
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
	printf("������һ����:");
	scanf("%d", &num);
	ret = count_one_bits(num);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
2.��ȡһ�������������������е�ż��λ������λ��
�ֱ�������������С�
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int num = 0;
	int ret = 0;
	scanf("%d", &num);
    printf("��������Ϊ��");
	for (i = 31; i >= 0; i -= 2)
	{
		ret = (num >> i) & 1;
		printf("%d ",ret );
	}
	printf("\n");
	  printf("ż������Ϊ��");
	for (i = 30; i >= 0; i -=2 )
	{
		ret = (num >> i) & 1;
		printf("%d ", ret);
	}
	system("pause");
	return 0;
}
3. ���һ��������ÿһλ��
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
4.���ʵ�֣�
����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
�������� :
1999 2299
������� : 7
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a = 0;
    int b = 0;
	int c = 0;
	scanf("%d %d", &a, &b);
	c = a^b;//�ж��ٸ�1�����ж���λ��һ��
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
5.д�����ܽ�C���Բ��������������ӷ����ң�������Ⱥ�
https://blog.csdn.net/Adenson/article/details/88974503