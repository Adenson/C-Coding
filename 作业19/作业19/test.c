//1.模拟实现strncpy
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_strncpy(char* dest, const char* src,size_t size)
{
	assert(dest&&src);
	char* ret = dest;
	while (size--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return ret;
}
int main()
{
	char a1[20] = "hello world";
	char* a2 = "changeworld";
	int num = 0;
	scanf("%d", &num);
	printf("%s\n", my_strncpy(a1, a2, num));
	system("pause");
	return 0;
}

//2.模拟实现strncat
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_strncat(char* dest, const char* src, size_t num)
{
	assert(dest&&src);
	char* ret = dest;
	while (*dest)
	{
		++dest;
	}
	while (num--&&*src)
	{
		*dest = *src;
		++dest;
		++src;
	}
	*dest = '\0';
	return ret;
}
int main()
{
	char a1[20] = "hello";
	char* a2 = "world";
	int num = 0;
	scanf("%d", &num);
	printf("%s\n", my_strncat(a1, a2, num));
	system("pause");
	return 0;
}

//3.模拟实现strncmp
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int my_strncmp(char* dest, const char* src, size_t num)
{
	assert(dest&&src);
	while (num--&&*dest&&*src)
	{
		if (*(unsigned char*)dest > *(unsigned char*)src)
	  {
		return 1;
	   }
		if (*(unsigned char*)dest < *(unsigned char*)src)
	   {
		return -1;
	   }
		else
		{ 
			++dest;
	        ++src;
		}
	}
    	return 0;
}
int main()
{
	char* a1 = "abcdef";
	char* a2 = "abcdeg";
	int num = 0;
	scanf("%d", &num);
	printf("%d", my_strncmp(a1, a2, num));
	system("pause");
	return 0;
}