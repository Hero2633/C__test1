#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//int main()
//{
//
//	int n = 5;
//	int ret = 1;
//	int sum = 0;
//	for (int j = 1; j <= 10; j++)
//	{
//		ret = 1;
//		for (int i = 1; i <= j; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//int main()
//{
//	double j = 1;
//	double sum = 0;
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + 1.0 / (j * i);
//		j *= -1;
//	}
//	printf("%lf\n",sum);
//	return 0;
//}
//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 1;
//	int tmp = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		tmp = i;
//		while (tmp>0)
//		{
//			if (tmp % 10 == 9)
//			{
//				count++;
//				break;
//			}
//			tmp /= 10;
//		}
//	}
//	printf("��9�ĸ���:%d\n",count);
//	return 0;
//}
//#include<time.h>
//enum GAME
//{
//	EXIT,
//	PLAY,
//
//};
//void menu()
//{
//	printf("+******* ��������Ϸ(1~100) *******+\n");
//	printf("l************ 1.PLAY *************l\n");
//	printf("l************ 0.EXIT *************l\n");
//	printf("+*********************************+\n");
//}
//void game()
//{
//	int key = rand() % 100 + 1;
//	int val = 0;
//	while (1)
//	{
//		printf("������:");
//		scanf("%d",&val);
//		if (key > val)
//			printf("��С��\n");
//
//		else if (key < val)
//			printf("�´���\n");
//		else
//		{
//			printf("��ϲ��¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		scanf("%d",&input);
//		switch (input)
//		{
//		case PLAY:
//			game(); break;
//		case EXIT:printf("�˳���Ϸ\n"); break;
//		default:printf("�������������ѡ��\a\a\a\n"); break;
//		}
//
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int key = 0;
//	scanf("%d",&key);
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] < key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±�Ϊ:%d\n",mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}
//#include<windows.h>
//int main()
//{
//	char arr1[] = "I love China!";
//	char arr2[] = "*************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\r", arr2);
//	Sleep(1000);
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		right--;
//		left++;
//		printf("%s\r",arr2);
//		Sleep(1000);
//	}
//	printf("%s", arr2);
//	return 0;
//}

//int main()
//{
//	printf("%s\r","abcd");
//	printf("%s","gggg");
//
//	return 0;
//}
//#include<conio.h>
//int main()
//{
//	char password[20] = { "accds" }; int count = 3;
//	while (count>0)
//	{
//		int i = 0;
//		printf("�������������:");
//		while ((password[i++] = _getch()) != '\r')
//		{
//			printf("*");
//		}
//		password[i-1] = '\0';
//		if (!strcmp(password, "bitbitbit"))
//		{
//			printf("\n������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("\n�������,�㻹��%d�λ���\n",--count);
//			
//		}
//		if (!count)
//		{
//			printf("���λ�������ù�,���Խ���1����֮�ڹػ�\n");
//			system("shutdown -s -t 60");
//		}
//	}
//	return 0;
//}
//#define BSC //
//int main()
//{
//	BSC printf("hahaah\n");
//	return 0;
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int a = rand();
//	printf("%d\n",a);
//	return 0;
//}
//#include<windows.h>
//int main()
//{
//	int i = 0;
//	char arr[] = "|/-|\\";
//	while (1)
//	{
//		i %= 5;
//		printf("[%c]\r",arr[i]);
//		i++;
//		Sleep(300);
//	}
//
//	return 0;
//}
//void DoubleFind(int* arr, int left, int right,int key)//�ݹ�汾
//{
//	if (right < left)
//	{
//		printf("û�ҵ�\n");
//		return;
//	}
//	int mid = (left + right) / 2;
//	
//		if (arr[mid] > key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] < key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±�Ϊ%d\n",mid);
//			return;
//		}
//		DoubleFind(arr, left, right, key);
//	
//}
//int main()
//{
//	int key = 0;
//	scanf("%d",&key);
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int mid = 0;
//	DoubleFind(arr, left, right, key);
//	return 0;
//}