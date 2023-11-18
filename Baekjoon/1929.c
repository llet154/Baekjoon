//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int isPrime(int n)
//{
//	if (n <= 1)
//	{
//		return 0;
//	}
//	for (int i = 2; i * i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//
//int main()
//{
//	int M, N, cnt = 0, c = 0;
//	scanf("%d %d", &M, &N);
//	int* arr = (int*)malloc(sizeof(int) * (N - M));
//	for (int i = M; i <= N; i++)
//	{
//		if (isPrime(i))
//		{
//			printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}