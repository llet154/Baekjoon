//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	while (1)
//	{
//		int a, num, n = 0;
//		int b[6] = { 0 };
//		scanf("%d", &a);
//		num = a;
//		if (num == 0)
//		{
//			exit(0);
//		}
//		while (a != 0)
//		{
//			a = a / 10;
//			n++;
//		}
//		for (int i = n-1; i >= 0; i--)
//		{
//			b[i] = num % 10;
//			num = num / 10;
//		}
//		if (n == 1 || n > 2)
//		{
//			int count = n - 2;
//			for (int i = 0; i < count; i++)
//			{
//				if (b[i] != b[n - 1])
//				{
//					num = 1;
//				}
//				else
//				{
//					n--;
//				}
//			}
//		}
//		else if (n == 2)
//		{
//			if (b[0] != b[n - 1])
//			{
//				num = 1;
//			}
//			else
//			{
//				num = 0;
//			}
//		}
//		if (num == 0)
//		{
//			printf("yes\n");
//		}
//		else if (num == 1)
//		{
//			printf("no\n");
//		}
//	}
//
//	return 0;
//}