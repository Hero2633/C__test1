#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//int main()
//{
//	/*int a = 0xffffffff;
//	int b = 0;
//	b |= a;
//	printf("%u\n",b);*/
//
//	/*int a = 0;
//	int b = 16;
//	b &= a;
//	printf("%d\n",b);*/
//
//	//int a = 0;
//	//int b = 7;
//	//b |= b;
//	//printf("%d\n",b);
//
//	//int a = 0;
//	//int b = 3;
//	//b &= b;
//	//printf("%d\n",b);
//
//	//int a = 2;//
//	//int b = 7;
//	//printf("%d\n", a ^ b);//��ͬΪ0������Ϊ1��
//	//printf("%d\n", a ^ 0);//2
//	//printf("%d\n",a^a);//0
//
//	return 0;
//


//# define fun1(x,n) (x=x|(1<<(n-1)))//���ض�����λ��Ϊ1�����ǶԲ��������
//# define fun2(x,n)  x=~x; x=fun1(x,n); x=~x//���ض�����λ��Ϊ0��
//void Printf(int x)
//{
//	int num = sizeof(int) * 8 - 1;
//	int count = 0;
//	while (num>=0)
//	{
//		if (x&(1 << num))
//			printf("1");
//		else
//			printf("0");
//		num--;
//		count++;
//		if (count!=0&&!(count % 4))
//			printf(" ");
//	}
//	printf("\n");
//}
////int main()
////{
////	int a = -1;
////	Printf(a);
////	
////	fun1(a,4);
////	Printf(a);
////	return 0;
////}
//int main()
//{
//	int a = -1;
//	Printf(a);
//	fun2(a,4);
//	Printf(a);
//	return 0;
//}
#pragma warning (disable:6031)
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{/*FILE*
//	char password[20];
//	int n = 0;
//	printf("������󳤶�%d\n",20);
//	printf("�������������õĺϷ�����:");
//	scanf("%d", &n);
//	printf("�������������:");
//		for (int i = 0; i < n; i++)
//		{
//			fscanf("%c",&password[i]);
//		}*/
//
//	FILE* p = fopen("password.txt", "r");
//	if (!p)
//		exit(-1);
//	char pw[20] = {0};
//	int j = 0;
//	while (EOF != (pw[j]=fgetc(p)))
//	{
//		j++;
//	}
//	char password[100];
//	/*char* a = "abcd";
//	char* s = "ab";
//	printf("%d\n",strcmp(a,s));*/
//	printf("�������������:");
//	scanf("%s",password);
//	int flag = 1;
//	for (int i = 0; i < j; i++)
//	{
//		if (pw[i] != password[i])
//		{
//			flag = 0;
//			printf("�����������\n");
//			exit(-1);
//		}
//	}
//	if (flag)
//	{
//		printf("����������ȷ\n");
//		printf("\a\a\aע����ĵ��Խ���1h֮��ػ�,����ȡ����������ȡ��\n");
//		printf("���������ѡ��:");
//		char s[] = { "ȡ��" };
//		scanf("%s",s);
//		if (!strcmp(s, "ȡ��"))
//		{
//			printf("ȡ���ɹ�\n");
//		}
//
//		else
//		{
//			printf("����ִ��\n");
//		}
//
//	}
//		return 0;
//}