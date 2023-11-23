//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int A, B, C,max;
//	while (1)
//	{
//		scanf("%d %d %d", &A, &B, &C);
//		max = (A > B ? A : B) > C ? (A > B ? A : B) : C;
//		if (A == 0 && B == 0 && C == 0)
//		{
//			exit(0);
//		}
//		if (A == max)
//		{
//			if (B*B + C*C == A*A)
//			{
//				printf("right\n");
//			}
//			else
//			{
//				printf("wrong\n");
//			}
//		}
//		else if (B == max)
//		{
//			if (A * A + C * C == B * B)
//			{
//				printf("right\n");
//			}
//			else
//			{
//				printf("wrong\n");
//			}
//		}
//		else if (C == max)
//		{
//			if (B * B + A * A == C * C)
//			{
//				printf("right\n");
//			}
//			else
//			{
//				printf("wrong\n");
//			}
//		}
//	}
//	
//
//
//
//	return 0;
//}