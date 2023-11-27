//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	char arr[101];
//	char arr2[101] = { 0 };
//	while (1)
//	{
//		int i, cnt = 0;
//		gets(arr);
//		int n = strlen(arr);
//		if (n == 1 && arr[0] == '.')
//		{
//			exit(0);
//		}
//		for (i = 0; i < n; i++)
//		{
//			if (arr[i] == '(')
//			{
//				arr2[cnt] = '(';
//				cnt++;
//			}
//			else if (arr[i] == '[')
//			{
//				arr2[cnt] = '[';
//				cnt++;
//			}
//			else if (arr[i] == ')')
//			{
//				if (arr2[cnt - 1] == '(')
//				{
//					cnt--;
//				}
//				else
//				{
//					cnt = -100;
//					break;
//				}
//			}
//			else if (arr[i] == ']')
//			{
//				if (arr2[cnt - 1] == '[')
//				{
//					cnt--;
//				}
//				else
//				{
//					cnt = -100;
//					break;
//				}
//			}
//		}
//		if (cnt == 0)
//		{
//			printf("yes\n");
//		}
//		else
//		{
//			printf("no\n");
//		}
//	}
//
//	return 0;
//}