//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//int main()
//{
//	int T, H, W, N,n,result,B=1;
//	scanf("%d", &T);
//	for (int i = 0; i < T; i++)
//	{
//		scanf("%d %d %d", &H, &W, &N); //N�� 24 H�� 6�϶�
//		if (H >= N)
//		{
//			result = N * 100 + 1;
//		}
//		else if (H < N)
//		{
//			result = N - H; //result = 18
//			B++;	//B=2
//			if (result <= H)
//			{
//				result = result * 100 + B;
//			}
//			else if (result > H)
//			{
//				if (result % H == 0)
//				{
//					n = result / H;
//					for (int j = 0; j < n - 1; j++) //result/H-1�� 2�� 2���ݺ�
//					{
//						B++;	//B=3 B=4
//						result = result - H;	//result = 12 result = 6
//					}
//					result = result * 100 + B;
//				}
//				else
//				{
//					for (int j = 0; j < (N / H) - 1; j++)
//					{
//						result = result - H;
//						B++;
//					}
//					result = result * 100 + B;
//				}
//			}
//		}
//		printf("%d\n", result);
//		B = 1;
//	}
//	
//	return 0;
//}