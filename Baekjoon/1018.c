//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int N, M;	//N�� M�� 8���� ũ�ų� ����, 50���� �۰ų� ���� �ڿ���
//	scanf("%d %d", &N, &M);
//	int count = 3000; //count�� ū ������ �ʱ�ȭ
//	char arr[50][51];
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%s", arr[i]);
//	}
//
//	int temp1 = 0, temp2 = 0; //ù° ĭ W�϶� B�϶� ���� ���
//	for (int x = 0; x < N - 7; x++)	//x��ǥ��
//	{
//		for (int y = 0; y < M - 7; y++) //y��ǥ�� �������� �� ������ �ݺ�
//		{
//			//ù° ĭ�� W�� ���鶧
//			for (int i = x; i < x + 8; i++) 
//			{
//				for (int j = y; j < y + 8; j++)
//				{
//					//���� ¦���� ��
//					if (((i - x + j - y) % 2) == 0)
//					{
//						//�ش��ϴ� ��ǥ�� W�� �ƴϸ�
//						if (arr[i][j] != 'W')
//						{
//							temp1++; //�ٽ� ĥ�ϱ�
//						}
//					}
//					//���� Ȧ���� ��
//					else {
//						//�ش��ϴ� ��ǥ�� B�� �ƴϸ�
//						if (arr[i][j] != 'B')
//						{
//							temp1++; //�ٽ� ĥ�ϱ�
//						}
//					}
//				}
//			}
//			//ù° ĭ�� B�� ����� ���
//			for (int i = x; i < x + 8; i++) {
//				for (int j = y; j < y + 8; j++)
//				{
//					if (((i - x + j - y) % 2) == 0)
//					{
//						if (arr[i][j] != 'B')
//						{
//							temp2++; //�ٽ� ĥ�ϱ�
//						}
//					}
//					else {
//						if (arr[i][j] != 'W')
//						{
//							temp2++; //�ٽ� ĥ�ϱ�
//						}
//					}
//				}
//			}
//			//�� ���� ĥ�� Ƚ���� ����
//			int res = temp1 < temp2 ? temp1 : temp2;
//			if (res < count) count = res;
//			temp1 = 0;
//			temp2 = 0;
//		}
//	}
//	printf("%d", count);
//
//
//	return 0;
//}