//1.模拟实现strlen
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
size_t my_strlen(const char* str)
{
	int count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return count;
}
int main()
{
	char* str = "abcde";
	printf("%d\n", my_strlen(str));
	system("pause");
	return 0;
}

//2.模拟实现strcpy
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* src)
{
	assert(dest&&src);
	char* ret = dest;
	while (*dest = *src)
	{
		dest++;
		src++;
	}
	return ret;
}
int main()
{
	char arr[20] = "hello world";
	char* str = "change world";
	printf("%s\n", my_strcpy(arr, str));
	system("pause");
	return 0;
}

//3.模拟实现strcat
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while (*dest = *src)
	{
		dest++;
		src++;
	}
	return ret;
}
int main()
{
	char arr[20] = "hello ";
	char* str = "world";
	printf("%s\n", my_strcpy(arr, str));
	system("pause");
	return 0;
}

//4.模拟实现strncpy
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_strncpy(char* dest, const char* src, int num)
{
	assert(dest&&src);
	char* ret = dest;
	while (num--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return ret;
}
int main()
{
	char arr[20] = "hello  world";
	char* str = "changeworld";
	int num = 0;
	scanf("%d", &num);
	printf("%s\n", my_strncpy(arr, str, num));
	system("pause");
	return 0;
}

//5.模拟实现strncat
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_strncat(char * dst, const char * src, size_t num)
{
	assert(src && dst);
	char* ret = dst;
	while (*dst)
	{
		dst++;
	}
	while (num-- && *src) 
	{
		*dst++ = *src++;
	}
	*dst = '\0'; 
	return ret; 
}
int main()
{
	char arr[20] = "hello";
	char* str = "world";
	int num = 0;
	scanf("%d", &num);
	printf("%s\n", my_strncat(arr, str, num));
	system("pause");
	return 0;
}

//6.模拟实现strcmp
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int my_strcmp(const char* str1,const char* str2)// 注释 字符比较：按无符号字符比较
{
	assert(str1 && str2);
	while (*str1 && *str2)
	{
		if (*(unsigned char*)str1 > *(unsigned char*)str2)
		{
			return 1;
		}
		if (*(unsigned char*)str1 < *(unsigned char*)str2)
		{
			return -1;
		}
		else
		{
			++str1;
			++str2;
		}
	}
	if (*str1 != '\0')
		return 1;
	else if (*str2 != '\0')
		return -1;
	else
		return 0;
}
int main()
{
	char a1[] = "abcde";
	char a2[] = "abcde";
	printf("%d\n", my_strcmp(a1, a2));
	system("pause");
	return  0;
}

//7.模拟实现strstr
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_strstr(const char * str1, const char * str2)
{
	assert(str1 && str2);
	while (*str1)
	{
		const char* ret1 = str1;
	    const char* ret2 = str2;
		while (*ret1 == *ret2 && *ret2)
	{
		++ret1;
		++ret2;
	}
	if (*ret2 == '\0')
	{
		return str1;
	}
	else
	    ++str1;
	}	
	return NULL;
}
int main()
{
	char* a1 = "abcfefgwrwerwe";
	char* a2 = "fefg";
	printf("%s\n",my_strstr(a1, a2));
	system("pause");
	return 0;
}

//8.模拟实现memcpy
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void* my_memcpy(void* dst,const void* src, size_t num)
{
	assert(dst&&src);
	char* dst_ = (char*)dst;
	const char* src_ = (const char*)src;
	while (num--)
	{
		*dst_ = *src_;
		dst_++;
		src_++;
	}
	return dst;
}
int main()
{
	char a1[10];
	char a2[10]="hel\0lo";
	my_memcpy(a1, a2, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%c ", a1[i]);//这个函数在遇到 '\0' 的时候并不会停下来
	}
	system("pause");
	return 0;
}
//模拟实现memmove
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void* my_memmove(void* dst, const void* src, size_t size)
{
	assert(dst&&src);
	char* dst_ = dst;
	const char* src_ = src;
	if ((src_ + size) > dst_ && src_ < dst_)//从后往前拷贝
	{
		for (int i = size - 1; i >= 0; i--)
		{
			dst_[i] = src_[i];
		}
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			dst_[i] = src_[i];
		}
	}
	return dst;
}
int main()
{
	int a1[10] = { 1, 2, 3, 4, 5 };
	my_memmove(a1 + 3, a1, 5 * sizeof(int));
	for (int i = 0; i < sizeof(a1) / sizeof(int); i++)
	{
		printf("%d ", a1[i]);
	}
	system("pause");
	return 0;
}

