//1.����Ļ���������ͼ���� 
       * 
      *** 
     ***** 
    ******* 
   ********* 
  *********** 
 ************* 
  *********** 
   ********* 
    ******* 
     ***** 
      *** 
       * 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 1; i <= 7; i++)
	{
		for (j = 1; j <= 7 - i; j++)
			printf(" ");
		for (k = 1; k<= (2*i - 1); k++)
			printf("*");
		printf("\n");
	}
	for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= i; j++)
			printf(" ");
		for (k = 11; k >= (2 * i - 1); k--)
			printf("*");
		printf("\n");
	}
	system("pause");
	return 0;
}

//2.���0��999֮������С�ˮ�ɻ��������������ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 0;
	for (i = 100; i <= 999; i++)//ˮ�ɻ���ָ��λ����ֱ���ų�0��99����100��ʼ
	{
		a = i/100;
		b = (i/10)%10;
		c = i%10;
		if (i==a*a*a+b*b*b+c*c*c)
		{
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}

//3.��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
���磺2 + 22 + 222 + 2222 + 22222
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num = 0;
	int count = 0;
	int k = 0;
	int i = 0;
	int sum = 0;
	scanf("%d %d", &num, &count);
	for (k = 1; k <= count; k++)
	{
		i = num + i * 10;
		sum = sum + i;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}
