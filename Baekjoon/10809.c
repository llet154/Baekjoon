//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	//아스키코드로 'a'는 97 'z'는 122
//	char c[101];
//	int a[26];
//
//	for (int i = 0; i < 26; i++)
//	{
//		a[i] = -1;
//	}
//	scanf("%s", c);
//	int len = strlen(c);
//
//	for (int i = 0; i < len; i++)
//	{
//		if (c[i] == 'a')
//		{
//			if (a[0] == -1)
//				a[0] = i;
//		}
//		else if (c[i] == 'b')
//		{
//			if (a[1] == -1)
//				a[1] = i;
//		}
//		else if (c[i] == 'c')
//		{
//			if (a[2] == -1)
//				a[2] = i;
//		}
//		else if (c[i] == 'd')
//		{
//			if (a[3] == -1)
//				a[3] = i;
//		}
//		else if (c[i] == 'e')
//		{
//			if (a[4] == -1)
//				a[4] = i;
//		}
//		else if (c[i] == 'f')
//		{
//			if (a[5] == -1)
//				a[5] = i;
//		}
//		else if (c[i] == 'g')
//		{
//			if (a[6] == -1)
//				a[6] = i;
//		}
//		else if (c[i] == 'h')
//		{
//			if (a[7] == -1)
//				a[7] = i;
//		}
//		else if (c[i] == 'i')
//		{
//			if (a[8] == -1)
//				a[8] = i;
//		}
//		else if (c[i] == 'j')
//		{
//			if (a[9] == -1)
//				a[9] = i;
//		}
//		else if (c[i] == 'k')
//		{
//			if (a[10] == -1)
//				a[10] = i;
//		}
//		else if (c[i] == 'l')
//		{
//			if (a[11] == -1)
//				a[11] = i;
//		}
//		else if (c[i] == 'm')
//		{
//			if (a[12] == -1)
//				a[12] = i;
//		}
//		else if (c[i] == 'n')
//		{
//			if (a[13] == -1)
//				a[13] = i;
//		}
//		else if (c[i] == 'o')
//		{
//			if (a[14] == -1)
//				a[14] = i;
//		}
//		else if (c[i] == 'p')
//		{
//			if (a[15] == -1)
//				a[15] = i;
//		}
//		else if (c[i] == 'q')
//		{
//			if (a[16] == -1)
//				a[16] = i;
//		}
//		else if (c[i] == 'r')
//		{
//			if (a[17] == -1)
//				a[17] = i;
//		}
//		else if (c[i] == 's')
//		{
//			if (a[18] == -1)
//				a[18] = i;
//		}
//		else if (c[i] == 't')
//		{
//			if (a[19] == -1)
//				a[19] = i;
//		}
//		else if (c[i] == 'u')
//		{
//			if (a[20] == -1)
//				a[20] = i;
//		}
//		else if (c[i] == 'v')
//		{
//			if (a[21] == -1)
//				a[21] = i;
//		}
//		else if (c[i] == 'w')
//		{
//			if (a[22] == -1)
//				a[22] = i;
//		}
//		else if (c[i] == 'x')
//		{
//			if (a[23] == -1)
//				a[23] = i;
//		}
//		else if (c[i] == 'y')
//		{
//			if (a[24] == -1)
//				a[24] = i;
//		}
//		else if (c[i] == 'z')
//		{
//			if (a[25] == -1)
//				a[25] = i;
//		}
//	}
//	for (int i = 0; i < 26; i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int main(void) {
//
//	char S[100];
//	int count[26];
//	for (int i = 0; i < 26; i++) {
//		count[i] = -1;
//	}
//
//	scanf("%s", S);
//
//	for (int i = 0; i < strlen(S); i++) {
//		if (count[S[i] - 'a'] == -1) {
//			count[S[i] - 'a'] = i;
//		}
//	}
//	for (int i = 0; i < 26; i++) {
//		printf("%d ", count[i]);
//	}
//	return 0;
//
//}