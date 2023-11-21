//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int N, M, res=1;
//	scanf("%d %d", &N, &M);
//	for (int i = 1; i <= N; i++)
//	{
//		if (N % i == 0)
//		{
//			for (int j = 1; j <= M; j++)
//			{
//				if (i == j)
//				{
//					if (M % j == 0)
//					{
//						res = j;
//					}
//				}
//			}
//		}
//	}
//	printf("%d\n", res);
//
//	int num = N * M;
//
//	for (int i = 1;N*i<=num; i++)
//	{
//		for (int j = 1;M*j<=num; j++)
//		{
//			if ((N * i) == (M * j))
//			{
//				printf("%d", N * i);
//				exit(0);
//			}
//		}
//	}
//	
//
//
//
//	return 0;
//}