//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int i, j, max, num = 0, result = 0, len;
//	char c[1000001];
//	int ch[26];
//	scanf("%s", c);
//	len = strlen(c);
//
//	for (i = 0; i < len; i++)
//	{
//		if (c[i] >= 'a' && c[i] <= 'z')
//		{
//			c[i] -= 32;
//		}
//	}
//
//	for (i = 'A'; i <= 'Z'; i++)
//	{
//		for (j = 0; j < len; j++)
//		{
//			if (i == c[j])
//			{
//				ch[i - 'A']++;
//			}
//		}
//	}
//
//	max = ch[0];
//
//	for (i = 1; i <26; i++)
//	{
//		if (ch[i] > max)
//		{
//			max = ch[i];
//			num = i;
//		}
//	}
//
//	for (i = 0; i < 26; i++)
//	{
//		if (max == ch[i])
//			result++;
//	}
//
//	if (result > 1)
//	{
//		printf("%c", '?');
//	}
//	else
//	{
//		printf("%c", num + 65);
//	}
//
//
//
//	return 0;
//}