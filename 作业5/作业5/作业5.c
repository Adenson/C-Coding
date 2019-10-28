////1.完成猜数字游戏。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("********************\n");
//	printf("******1.play********\n");
//	printf("******0.exit********\n");
//	printf("********************\n");
//}
//void game()
//{
//	int guess = 0;
//	srand((unsigned int)time(NULL));
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//	    printf("请输入一个1^100的猜想数:");
//		scanf("%d", &guess);
//		if (ret > guess)
//		{
//			printf("猜小了\n");
//		}
//		if (ret < guess)
//		{
//			printf("猜大了\n");
//		}
//		if (ret == guess)
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//     int input = 0;
//	do
//	{ 
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{ 
//		   case 1:
//			   game();
//			   break;
//		   case 0:
//			   printf("退出游戏\n");
//			   break;
//		   default:
//			   printf("输入错误，请重新输入！！！");
//			   break;
//		  }
//	  }
//	   while (input);
//	   system("pause");
//	   return 0;
//   }
//3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char arr[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", &arr);
//		if ((strcmp(arr, "haohaoxuexi") == 0))
//		{
//			printf("登录成功\n");
//			break;
//		}  
//		else
//		{
//			printf("密码输入错误，请重新输入\n");
//		}
//	}
//     if (i == 3)
//	 {
//		 printf("密码三次输入错误，退出程序\n"); 
//     }  
//	system("pause");
//	return 0;
//}
//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int ch = 0;
//	while (( ch=getchar()) != EOF)
//	{
//		if (ch >='a'&&ch <='z')
//			printf("%c\n", ch - 32);
//		if (ch>='A'&&ch <= 'Z')
//			printf("%c\n", ch + 32);
//	}
//	system("pause");
//	return 0;
//}