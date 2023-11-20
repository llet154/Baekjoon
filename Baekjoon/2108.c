//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int compare(const void* arg1, const void* arg2)
//{
//	int a = *(int*)arg1;
//	int b = *(int*)arg2;
//	if (a > b)
//	{
//		return 1;
//	}
//	else if (a < b)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int N, sum = 0, cnt=0,count=0, T=0;
//	int max=0, min,range;
//	scanf("%d", &N);
//	int* arr = (int*)malloc(sizeof(int) * N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//
//	qsort(arr, N, sizeof(int), compare);
//	double A = sum / (double)N;
//	if ((sum / (double)N) >= -0.5 && (sum / (double)N) < 0)
//	{
//		A -= A;
//		printf("%.0lf\n", A);
//	}
//	else
//	{
//		printf("%.0lf\n", sum / (double)N);
//	}
//	printf("%d\n", arr[N / 2]);
//
//	int arr2[8001] = { 0 };
//	for (int i = 0; i < N; i++)
//	{
//		cnt = arr[i] + 4000;
//		arr2[cnt] += 1;
//
//		if (arr2[cnt] > max)
//		{
//			max = arr2[cnt];
//		}
//	}
//
//	for (int i = 0, cnt = 0; i < 8001; i++)
//	{
//		if (arr2[i] == max)
//		{
//			T++;
//			if (count == 0)
//			{
//				cnt = i;
//				count += 1;
//				if (N == 1)
//				{
//					printf("%d\n", cnt - 4000);
//					break;
//				}
//			}
//			else if (count == 1)
//			{
//				cnt = i;
//				printf("%d\n", cnt - 4000);
//				break;
//			}
//		}
//		if (i == 8000)
//		{
//			if (T == 1)
//			{
//				printf("%d\n", cnt - 4000);
//			}
//		}
//	}
//
//	max = arr[0];
//	min = arr[0];
//	for (int i = 1; i < N; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//		else
//		{
//			max = max;
//		}
//		if (min > arr[i])
//		{
//			min = arr[i];
//		}
//		else
//		{
//			min = min;
//		}
//	}
//	range = max - min;
//	printf("%d", range);
//
//
//	return 0;
//}