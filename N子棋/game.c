#define _CRT_SECURE_NO_WARNINGS
#include"Gobang.h"
void test1()
{
	int com = 0;
	int man = 0;
	char arr[R][C];
	Initialize(arr);
	while (1)
	{
	   com=ComputerMove(arr);
	if (com == Size+1 )
	{
		system("cls");
		PrintfArr(arr);
		printf("С�˼�,��Ȼ�õ���Ӯ��\a\a\a\n");
		break;
	}
	else if (com == 1)
	{
		system("cls");
		PrintfArr(arr);
		printf("ƽ��\a\a\a\n");
		break;
	}
		PrintfArr(arr);
		///////////////////////////�ֽ���
		man=HumanMove(arr);
		if (man >= Size+1 )
		{
			system("cls");
			PrintfArr(arr);
			printf("��ϲ��Ӯ��\a\a\a\n");
			break;
		}
		else if (man >= 1)
		{
			system("cls");
			PrintfArr(arr);
			printf("ƽ��\a\a\a\n");
			break;
		}
		system("cls");
	}
	
}

int main()
{
	srand((int)time(NULL));
	test1();

	return 0;
}