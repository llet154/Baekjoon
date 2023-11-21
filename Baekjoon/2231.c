//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int c_cnt(int n)
//{
//	if (n < 10)
//	{
//		return n + n;
//	}
//	else
//	{
//		int sum = n;
//		while (n > 0)
//		{
//			sum += n % 10;
//			n /= 10;
//		}
//		return sum;
//	}
//}
//
//
//int main()
//{
//	int N;
//	int result=0;
//	scanf("%d", &N);
//	
//	for (int i = 1; i <= N; i++)
//	{
//		if (c_cnt(i) == N)
//		{
//			result = i;
//			break;
//		}
//	}
//
//	printf("%d", result);
//
//
//
//	return 0;
//}