1. ������A�е����ݺ�����B�е����ݽ��н�����������һ����
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr1[] = { 1, 2, 3 };
	int arr2[] = { 5, 6, 7 };
	int tem = 0;
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);//����������Ԫ�صĸ���
	for (i = 0; i < sz; i++)
	{
		tem = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tem;
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);
	}
	system("pause");
	return 0;
}
2. ����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ��
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	double sum = 0;
	for (i = 1; i < 101; i++)
	{
		if (i % 2 == 1)
		sum = sum + 1.0 / i;
		else
	    sum = sum - 1.0 / i;
	}
	printf("%lf\n", sum);
	system("pause");
	return 0;
}
2. ����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ��
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i < 101; i++)
	{
		sum = sum + flag*1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);
	system("pause");
	return 0;
}
3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			printf("%d\n", i);
		if (i / 10 == 9)
			printf("%d\n", i);
		count++;
	}
	system("pause");
	return 0;
}