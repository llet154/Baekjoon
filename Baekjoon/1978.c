//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int isPrime(int n)
//{
//	if (n == 1)
//	{
//		return 0;
//	}
//	else if (n > 1)
//	{
//		for (int i = 2; i * i <= n; i++)
//		{
//			if (n % i == 0)
//			{
//				return 0;
//			}
//		}
//		return 1;
//	}
//}
//
//int main()
//{
//	int N, cnt=0;
//	scanf("%d", &N);
//	int* arr = (int*)malloc(sizeof(int) * N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (isPrime(arr[i]))
//		{
//			cnt++;
//		}
//	}
//	printf("%d", cnt);
//	
//
//
//	return 0;
//}