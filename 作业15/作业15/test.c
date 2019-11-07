//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个只出现一次的数字，编程实现。

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
//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
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
//3.模拟实现strcpy
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

//4.模拟实现strcat
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