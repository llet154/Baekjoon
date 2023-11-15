//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int compare(const void* arg1, const void* arg2)
//{
//	//길이순 정렬
//	if (strlen((const char*)arg1) > strlen((const char*)arg2))
//		return 1;
//	else if (strlen((const char*)arg1) < strlen((const char*)arg2))
//		return -1;
//	//길이가 같으면 사전순
//	else
//		return strcmp((char*)arg1, (char*)arg2);
//}
//
//
//int main()
//{
//	int N;
//	char a[20000][51] = { 0 };
//	scanf("%d", &N);
//
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%s", a[i]);
//	}
//
//	//정렬
//	qsort(a, N, sizeof(a[0]), compare);
//
//	//정렬 후 같은 문자열은 생략하고 출력
//	for (int i = 0; i < N; i++)
//	{
//		if (strcmp(a[i], a[i + 1]) != 0 || i == N - 1)
//		{
//			printf("%s\n", a[i]);
//		}
//	} 
//
//	return 0;
//}