//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int compare(const void* avg1, const void* avg2)
//{
//	int a = *(int*)avg1;
//	int b = *(int*)avg2;
//	if (a > b)
//	{
//		return 1;
//	}
//	else if (a < b)
//	{
//		return -1;
//	}
//	else
//		return 0;
//}
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
//
//	qsort(arr, N, sizeof(int), compare);
//
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//
//
//	return 0;
//}