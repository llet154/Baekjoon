//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int T, k, n, i, j;
//	scanf("%d", &T);
//	for (int t = 0; t < T; t++)
//	{
//		scanf("%d", &k);
//		scanf("%d", &n);
//		int** arr;
//		int sum = 0;
//		arr = (int**)malloc(sizeof(int*) * k);
//		for (i = 0; i < k; i++)
//		{
//			arr[i] = (int*)malloc(sizeof(int) * n);
//		}
//
//		for (i = 0; i < k; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == 0)
//				{
//					arr[i][j] = j + 1;
//				}
//				else
//				{
//					for (int l = 0; l <= j; l++)
//					{
//						sum += arr[i - 1][l];
//					}
//					arr[i][j] = sum;
//					sum = 0;
//				}
//			}
//		}
//
//		int res=0;
//		// 출력 부분
//		for (int i = 0; i < n; i++)
//		{
//			 res += arr[k - 1][i];
//		}
//		printf("%d\n", res);
//
//		// 메모리 해제
//		for (i = 0; i < k; i++)
//		{
//			free(arr[i]);
//		}
//		free(arr);
//	}
//
//	return 0;
//}