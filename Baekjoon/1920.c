//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int compare(const void* arg1, const void* arg2)
//{
//	int a = *(int*)arg1;
//	int b = *(int*)arg2;
//	//오름차순 정렬
//	if (a > b)
//		return 1;
//	else if (a < b)
//		return -1;
//	else
//		return 0;
//}
//
//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	int* arr = (int*)malloc(sizeof(int) * N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int M;
//	scanf("%d", &M);
//	int* arr2 = (int*)malloc(sizeof(int) * M);
//	for (int i = 0; i < M; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//
//	qsort(arr, N, sizeof(int), compare);
//
//	int first, end, mid;
//	int flag;
//
//	for (int i = 0; i < M; i++)
//	{
//		first = 0, end = N - 1, flag = 0;
//		while (first <= end)
//		{
//			mid = (first + end) / 2;
//
//			if (arr2[i] == arr[mid])
//			{
//				flag = 1;
//				break;
//			}
//			else if(arr2[i]<arr[mid])
//			{
//				end = mid - 1;
//			}
//			else if (arr2[i] > arr[mid])
//			{
//				first = mid + 1;
//			}
//		}
//		if (flag)
//			printf("1\n");
//		else
//			printf("0\n");
//	}
//
//	free(arr);
//	free(arr2);
//
//
//	return 0;
//}