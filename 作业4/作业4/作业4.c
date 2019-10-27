//1.在屏幕上输出以下图案： 
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

//2.求出0～999之间的所有“水仙花数”并输出。“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 0;
	for (i = 100; i <= 999; i++)//水仙花数指三位数，直接排除0到99，从100开始
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

//3.求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
例如：2 + 22 + 222 + 2222 + 22222
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
