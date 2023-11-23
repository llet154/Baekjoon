//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int N, cnt = 0,count=0;
//	scanf("%d", &N);
//	if (N >= 5)
//	{
//		while (N >= 5)
//		{
//			N -= 5;
//			cnt++;
//		}
//		if (N == 4)
//		{
//			cnt--;
//			N += 5;
//			cnt += N / 3;
//		}
//		else if (N==3)
//		{
//			cnt++;
//		}
//		else if (N == 2)
//		{
//			if (cnt == 1)
//			{
//				cnt = -1;
//			}
//			else if (cnt == 2)
//			{
//				cnt -= 2;
//				N += 10;
//				cnt += N / 3;
//			}
//			else
//			{
//				for (int i = cnt; i > 2; i--)
//				{
//					count++;
//				}
//				cnt = 0;
//				cnt = 4 + count;
//			}
//		}
//		else if (N == 1)
//		{
//			cnt--;
//			N += 5;
//			cnt += N / 3;
//		}
//	}
//	else if (N == 3)
//	{
//		cnt++;
//	}
//	else
//	{
//		cnt = -1;
//	}
//	printf("%d", cnt);
//
//
//
//	return 0;
//}