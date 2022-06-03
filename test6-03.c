#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void ShellSort(int* a, int len)
{
	int gap=len;
	int end;
	while (gap >=1)
	{
		gap = gap / 2;//Ҳ����д��gap=gap/3+1
		for (int j = 0; j < gap; j++)//��������
		{
			for (int i = j; i < len; i += gap)//һ�η��飨Ԥ����
			{

				//��������
				end = i;//һ������
				int key = a[end + gap];
				while (end >= 0)
				{
					if (key > a[end])//����
					{
						a[end + gap] = a[end];
						end -= gap;
					}
					else
						break;
				}
				a[end + gap] = key;

			}
		}
	}
}
void ShellSort2(int *a,int len)
{
	int gap = len;
	int end;
	while (gap >= 1)
	{
		gap = gap / 2;//Ҳ����д��gap=gap/3+1
		
			for (int i = 0; i < len-gap; i += 1)//��η���ͬʱ���У�Ԥ����
			{

				//��������
				end = i;//һ������
				int key = a[end + gap];
				while (end >= 0)
				{
					if (key < a[end])//����
					{
						a[end + gap] = a[end];
						end -= gap;
					}
					else
						break;

				}
				a[end + gap] = key;

			}
		
	}

}
void PrintfArr(int *a,int len)
{
	for (int i=0;i<len;i++)
	{
		printf("%d->",a[i]);
	}


}
int main()
{

	int a[] = {1,2,3,4,5,4,1,76,2,89,2,7,9,3,54,98,23,87};

	int len = sizeof(a) / sizeof(a[0]);
	ShellSort2(a,len);//ʱ�临�Ӷȣ�n^1.5��
	PrintfArr(a,len);

	return 0;

}