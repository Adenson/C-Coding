////1.��ɲ�������Ϸ��
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
//	    printf("������һ��1^100�Ĳ�����:");
//		scanf("%d", &guess);
//		if (ret > guess)
//		{
//			printf("��С��\n");
//		}
//		if (ret < guess)
//		{
//			printf("�´���\n");
//		}
//		if (ret == guess)
//		{
//			printf("�¶���\n");
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
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{ 
//		   case 1:
//			   game();
//			   break;
//		   case 0:
//			   printf("�˳���Ϸ\n");
//			   break;
//		   default:
//			   printf("����������������룡����");
//			   break;
//		  }
//	  }
//	   while (input);
//	   system("pause");
//	   return 0;
//   }
//3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
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
//		printf("���������룺");
//		scanf("%s", &arr);
//		if ((strcmp(arr, "haohaoxuexi") == 0))
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}  
//		else
//		{
//			printf("���������������������\n");
//		}
//	}
//     if (i == 3)
//	 {
//		 printf("����������������˳�����\n"); 
//     }  
//	system("pause");
//	return 0;
//}
//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
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