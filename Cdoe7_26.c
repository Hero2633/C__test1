#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//int main()
//{
//	int a[] = { 1 ,2 ,3 };
//	/*printf("%d\n",a[3]);*/
//	char arr[] = "abcd";
//	printf("%d\n",arr[5]);
//
//	int a[][3] = { {1,2,3},{3},{1,2,3} };
//
//	return 0;
//}
//������A�е����ݺ�����B�е����ݽ��н�����������һ����
//void SwapArr(int *a,int *b,int len)
//{
//	len--;
//	while (len>=0)
//	{
//		a[len] = a[len] ^ b[len];
//		b[len] = b[len] ^ a[len];
//		a[len] = a[len] ^ b[len];
//		--len;
//	}
//
//}
//void PrintfArr(int* a, int len)
//{
//	for (int i = 0; i < len;i++)
//	{
//
//		printf("%d ",a[i]);
//
//	}
//	putchar('\n');
//}
//int main()
//{
//	int A[10] = {1,2,3,4,5,6,7,8,9,0};
//	int B[10] = { 8,8,8,8,8,8,8,8,8,8 };
//	int lenA = sizeof(A) / sizeof(A[0]);
//	int lenB = sizeof(B) / sizeof(B[0]);
//	printf("����֮ǰ:\n");
//	PrintfArr(A, lenA);
//	PrintfArr(B, lenB);
//	SwapArr(A, B, lenA);
//	printf("����֮��:\n");
//	PrintfArr(A, lenA);
//	PrintfArr(B,lenB);
//	return 0;
//}
//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//void Init(int *a,int len)
//{
//	for (int i = 0; i < len;i++)
//	{
//		a[i] = 0;
//	}
//
//}
//void Reverse(int *a,int len)
//{
//	int left = 0;
//	int right = len - 1;
//	while (left<=right)
//	{
//		a[right] = a[right] ^ a[left];		
//		a[left] = a[right] ^ a[left];
//		a[right] = a[right] ^ a[left];
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	int arr[] = {0,1,2,3,4,5,6,7,8,9};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	/*Init(arr,len);*/
//	Reverse(arr,len);
//	PrintfArr(arr,len);
//
//}
//void PrintfArr(int* a, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	putchar('\n');
//}
//void Swap(int *a,int *b)
//{
//	*a = (*a) ^ (*b);
//	*b = (*b) ^ (*a);
//	*a = (*a) ^ (*b);
//
//}
//void Bubbles_Sort(int *a,int len)
//{
//	if (!len)
//		return;
//	for (int i = 0; i < len; i++)
//	{
//		if (a[i] < a[i + 1])
//			Swap(&a[i],&a[i+1]);
//	}
//	Bubbles_Sort(a,len-1);
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10,11,1,2,13,14,15,16,17 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Bubbles_Sort(arr,len-1);
//	PrintfArr(arr,len);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int N = 0;
//    int M = 0;
//    int a[10][10] = { 0 };
//    scanf("%d%d", &N, &M);
//    int* p = (int*)a;
//    for (int i = 0; i < N * M; i++)
//    {
//        scanf("%d", &p[i]);
//    }
//    int sum = 0;
//    for (int j = 0; j < N * M; j++)
//    {
//        if (p[j] > 0)
//            sum += p[j];
//    }
//    printf("%d\n", sum);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//
//    int a[10][10] = { 0 };
//    int n = 0;
//    int m = 0;
//    scanf("%d%d", &n, &m);
//    int* p = (int*)a;
//    for (int i = 0; i < n * m; i++)
//        scanf("%d", &p[i]);
//    int j = 0;
//    int N = n;
//    int M = m;
//    while (m--)
//    {
//        j = 0;
//        n = N;
//        while (n--)
//        {
//            printf("%d ", p[j]);
//            j += M;
//        }
//        putchar('\n');
//        p++;
//      
//    }
//    return 0;
//}


//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main(int argc, char* argv[]) {
//	int a = 20;
//	int b = 30;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}