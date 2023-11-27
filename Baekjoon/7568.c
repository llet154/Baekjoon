//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	int* kg = (int*)calloc(N,sizeof(int));
//	int* cm = (int*)calloc(N, sizeof(int));
//	int* res = (int*)calloc(N, sizeof(int));
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d %d", &kg[i], &cm[i]);
//	}
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = i+1; j < N; j++)
//		{
//			if (kg[i] < kg[j] && cm[i] < cm[j])
//			{
//				res[i]++;
//			}
//		}
//		for (int k = 0; k < i; k++)
//		{
//			if (kg[i] < kg[k] && cm[i] < cm[k])
//			{
//				res[i]++;
//			}
//		}
//	}
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d ", res[i]+1);
//	}
//
//
//
//	return 0;
//}