//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char c[1000001];
//	int i=0, count = 0;
//	
//	gets(c);
//
//	while (c[i] != '\0')  //문자열문장끝에는 '\0'이 붙을것이므로 종료될 수 있게
//	{
//		if (c[i] == ' ') //공백의 갯수 세기
//			count++;
//		i++;
//	}
//	if (c[0] == ' ') //처음 공백 제거
//	{
//		count--;
//	}
//	if (c[strlen(c) - 1] == ' ') //마지막 공백 제거
//	{
//		count--;
//	}
//	printf("%d", count + 1); //단어의 갯수는 공백+1개 이므로
//
//	return 0;
//}