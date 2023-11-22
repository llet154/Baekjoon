//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int N, M, n, sum = 0, i, j, k;
//	int max = 0;
//	scanf("%d %d", &N, &M);
//	int* arr = (int*)malloc(sizeof(int) * N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = i + 1; j < N; j++)
//		{
//			for (int k = j + 1; k < N; k++)
//			{
//				sum += (arr[i] + arr[j] + arr[k]);
//				if (sum <= M && sum > max)
//				{
//					max = sum;
//				}
//				sum = 0;
//			}
//		}
//	}
//	printf("%d", max);
//
//
//
//	free(arr);
//
//	return 0;
//}