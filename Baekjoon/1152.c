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
//	while (c[i] != '\0')  //���ڿ����峡���� '\0'�� �������̹Ƿ� ����� �� �ְ�
//	{
//		if (c[i] == ' ') //������ ���� ����
//			count++;
//		i++;
//	}
//	if (c[0] == ' ') //ó�� ���� ����
//	{
//		count--;
//	}
//	if (c[strlen(c) - 1] == ' ') //������ ���� ����
//	{
//		count--;
//	}
//	printf("%d", count + 1); //�ܾ��� ������ ����+1�� �̹Ƿ�
//
//	return 0;
//}