1. 5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
aѡ��˵��b�ڶ����ҵ�����
bѡ��˵���ҵڶ���e���ģ�
cѡ��˵���ҵ�һ��d�ڶ���
dѡ��˵��c����ҵ�����
eѡ��˵���ҵ��ģ�a��һ��
����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3) == 1) && ((b == 2) + (e==4))
							&& ((c == 1) + (d == 2)) && ((c == 5) + (e == 3)) &&
							((e == 4) + (a == 1)))
						{
							if ((a*b*c*d*e) == 120)//��ͬ���ĳ˻��Ǹ���ֵ
							{
								printf("A=%d B=%d C=%d D=%d E=%d\n", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}
2.
�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
a˵�������ҡ�
b˵����c��
c˵����d��
d˵��c�ں�˵
��֪3����˵���滰��1����˵���Ǽٻ���
�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
#define _CRT_SECURE_NO_WARNINGS 1//����1
#include<stdio.h>
#include<stdlib.h>
void predict(int killer)
{
	for (killer = 1; killer <= 4; killer++)
	{
		if ((1 != killer) + (3 == killer) + (4 == killer) + (4 != killer) == 3)
		{
			printf("������%c\n", killer+'A'-1);
		}
	}
}
int main()
{
	int killer = 0;
	predict(killer);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1//����2
#include<stdio.h>
#include<stdlib.h>
void predict(char killer)
{
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')==3)
		{
			printf("������%c\n", killer);
		}
	}
}
int main()
{
	char killer = 0;
	predict(killer);
	system("pause");
	return 0;
}



3.����Ļ�ϴ�ӡ������ǡ�
1
1 1
1 2 1
1 3 3 1
#define _CRT_SECURE_NO_WARNINGS 1//����2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 5
int main()
{
	int arr[N][N] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < N; i++)
	{
		arr[i][0] = arr[i][i] = 1;
	}
	for (i = 2; i < N; i++)
	{
		for (j = 1; j <= i; j++)
		{
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}
	int k = 0;
	for (i = 0; i < N; i++)
	{
		for (k = N - i-1; k>0; k--)
		{
			printf(" ");
		} 
		for (j = 0; j <= i; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
