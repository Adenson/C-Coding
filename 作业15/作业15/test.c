//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ�������ֻ����һ�ε����֣����ʵ�֡�

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void find_single(int arr[], int size)
{
	int i = 0;
	int j = 0;
	int flag = 0;
	for (i=0; i < size; i++)
	{
		flag = 0;
		for (j = 0; j < size; j++)
		{
			if (arr[j] == arr[i] && i != j)
				flag = 1;
		}
		if (flag == 0)
			printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = { 1, 2, 4, 3, 1, 5, 2, 3 };
	int len = sizeof(arr) / sizeof(arr[0]);
	find_single(arr, len);
	system("pause");
	return 0;
}
//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int empty_bottle = 20;
	int bottle = 20;
	while (empty_bottle)
	{
		empty_bottle = empty_bottle / 2;
		bottle = bottle + empty_bottle;
	}
	printf("%d\n", bottle);
	system("pause");
	return 0;
}
//3.ģ��ʵ��strcpy
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* sorc)
{
	assert(dest&&sorc);
	char* ret = dest;
	while (*dest++ = *sorc++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr[15] = "helloworld";
	my_strcpy(arr, "changeworld");
	printf("%s\n",arr);
	system("pause");
	return 0;
}

//4.ģ��ʵ��strcat
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_strcat(char* dest,const char* sorc)
{
	assert(dest&&sorc);
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *sorc++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr[20] = "hello ";
	my_strcat(arr,"world");
	printf("%s\n", arr);
	system("pause");
	return 0;
}