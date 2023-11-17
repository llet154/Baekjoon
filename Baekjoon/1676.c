//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int factorial(int N)
//{
//	if (N >= 1)
//	{
//		return N * factorial(N - 1);
//	}
//}
//
//int main()
//{
//	int N, count = 0, cnt = 0;
//	scanf("%d", &N);
//	if (N == 0)
//	{
//		printf("%d", 0);
//		exit(0);
//	}
//	int Num = factorial(N);
//	printf("%d", Num);
//	for (int i = 0;; i++)
//	{
//		if (Num % 10 == 0)
//		{
//			count++;
//			Num = Num / 10;
//		}
//		else
//		{
//			printf("%d", count);
//			break;
//		}
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	int mul5 = 0; //5의 배수
//	int mul25 = 0; //25의 배수
//	int mul125 = 0; //125의 배수
//
//	mul5 = N / 5;
//	mul25 = N / 25;
//	mul125 = N / 125;
//
//	printf("%d", mul5 + mul25 + mul125);
//
//
//
//	return 0;
//}