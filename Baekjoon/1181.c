//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int compare(const void* arg1, const void* arg2)
//{
//	//���̼� ����
//	if (strlen((const char*)arg1) > strlen((const char*)arg2))
//		return 1;
//	else if (strlen((const char*)arg1) < strlen((const char*)arg2))
//		return -1;
//	//���̰� ������ ������
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
//	//����
//	qsort(a, N, sizeof(a[0]), compare);
//
//	//���� �� ���� ���ڿ��� �����ϰ� ���
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