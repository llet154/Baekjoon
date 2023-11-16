//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int N;
//	double avg, sum=0;
//	scanf("%d", &N);
//	double arr[1000] = { 0 };
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%lf", &arr[i]);
//	}
//	double max = arr[0];
//	for (int i = 1; i < N; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		else
//			max = max;
//	}
//	for (int i = 0; i < N; i++)
//	{
//		arr[i] = arr[i] / max * 100;
//		sum += arr[i];
//	}
//	
//	avg = sum / N;
//	printf("%lf", avg);
//
//
//	return 0;
//}