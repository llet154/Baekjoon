//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main()
//{
//	char result[200000] = { 0 };
//	int array[100000] = { 0 };
//	int top = -1;
//	int n;
//	scanf("%d", &n);
//
//	int* arr = (int*)malloc(sizeof(int) * n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int num = 1;
//	int cnt = 0, result_cnt = 0;
//	while (1)
//	{
//		//array�� �ִ� ���� ��ǥ �� ���� ���� ���
//		//push(+)
//		if (top == -1 || array[top] < arr[cnt])
//		{
//			array[++top] = num++;
//			result[result_cnt++] = '+';
//		}
//		//array ��ܺκ��� ���� ��ǥ ���� ���� ���
//		//pop(-)
//		else if (array[top] == arr[cnt])
//		{
//			top--;
//			result[result_cnt++] = '-';
//			cnt++;
//		}
//		//array ��ܺκ��� ���� ��ǥ �� ���� ���� ���
//		//���Ѵ� ���� ���� �� ����
//		else
//		{
//			printf("NO\n");
//			return 0;
//		}
//		if (result_cnt == n * 2)
//		{
//			break;
//		}
//	}
//
//	//��� ���
//	for (int i = 0; i < result_cnt; i++)
//	{
//		printf("%c\n", result[i]);
//	}
//	
//
//
//
//	return 0;
//}