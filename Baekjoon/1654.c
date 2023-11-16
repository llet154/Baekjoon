//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int K, N, i, j;
//	long long max = 0, max_len=0, left, mid, right, cnt;
//	int arr[10000] = { 0 };
//	scanf("%d %d", &K, &N);
//	for (int i = 0; i < K; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	left = 1, right = max;
//
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//
//		for (j = 0, cnt = 0; j < K; j++)
//		{
//			cnt += arr[j] / mid;
//		}
//		if (N <= cnt && max_len < mid  )
//		{
//			max_len = mid;
//		}
//		else if (cnt < N)
//		{
//			right = mid - 1;
//		}
//		else
//			left = mid + 1;
//	}
//
//	printf("%lld\n", max_len);
//
//
//	return 0;
//}