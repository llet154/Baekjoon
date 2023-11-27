//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	char arr[51];
//	char arr2[51] = { 0 };
//	for (int i = 0; i < T; i++)
//	{
//		int cnt = 0;
//		scanf("%s", arr);
//		int n = strlen(arr);
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[j] == '(')
//			{
//				arr2[cnt] = '(';
//				cnt++;
//			}
//			else if (arr[j] == ')')
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
//		}
//		if (cnt == 0)
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//
//	}
//
//
//
//	return 0;
//}