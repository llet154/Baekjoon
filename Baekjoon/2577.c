//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() 
//{
//	int A, B, C;
//	int result;
//	scanf("%d\n%d\n%d", &A, &B, &C);
//	int a[10] = { 0 };
//	result = A * B * C;
//	/*while (result>0)
//	{
//		if (result % 10 == 0)
//		{
//			a[0]++;
//			result = result / 10;
//		}
//		else if (result % 10 == 1)
//		{
//			a[1]++;
//			result = result / 10;
//		}
//		else if (result % 10 == 2)
//		{
//			a[2]++;
//			result = result / 10;
//		}
//		else if (result % 10 == 3)
//		{
//			a[3]++;
//			result = result / 10;
//		}
//		else if (result % 10 == 4)
//		{
//			a[4]++;
//			result = result / 10;
//		}
//		else if (result % 10 == 5)
//		{
//			a[5]++;
//			result = result / 10;
//		}
//		else if (result % 10 == 6)
//		{
//			a[6]++;
//			result = result / 10;
//		}
//		else if (result % 10 == 7)
//		{
//			a[7]++;
//			result = result / 10;
//		}
//		else if (result % 10 == 8)
//		{
//			a[8]++;
//			result = result / 10;
//		}
//		else if (result % 10 == 9)
//		{
//			a[9]++;
//			result = result / 10;
//		}
//	}*/
//	while (result > 0)
//	{
//		int num = result % 10;
//		a[num]++;
//		result /= 10;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", a[i]);
//	}
//	
//
//	return 0;
//}