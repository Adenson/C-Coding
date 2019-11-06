//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void spin(char* arr,int num)
{
	int i = 0;
	int length = strlen(arr) - 1;
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		char ret = arr[0];
		int j = 0;
		for ( j = 0; j < length; j++ )
		{
			arr[j] = arr[j + 1];
		}
		arr[length] = ret；
	}
}
int main()
{
	char arr[] = "ABCD";
	int num = 0;
	spin(arr,num);
	printf("%s\n", arr);
	system("pause");
	return 0;
}
//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int spin(char* arr1,char* arr2,int num,int result)
{
	int i = 0;
	int ret = 0;
	int length = strlen(arr1) - 1;
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		char ret = arr1[0];
		int j = 0;
		for ( j = 0; j < length; j++ )
		{
			arr1[j] = arr1[j + 1];
		}
		arr1[length] = ret;
	}
	return result=strcmp(arr1,arr2);
}
int main()
{
	char arr1[] = "AABCD";
	char arr2[] = "ABCDA";
	int num = 0;
	int result = 0;
	spin(arr1, arr2,num,result);
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	if (result == 0)
	{
		printf("arr1旋转后等于arr2\n");
	}
	else
	{
		printf("arr1旋转后不等于arr2");
	}
	system("pause");
	return 0;
}