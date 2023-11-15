//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int N, M;	//N과 M은 8보다 크거나 같고, 50보다 작거나 같은 자연수
//	scanf("%d %d", &N, &M);
//	int count = 3000; //count는 큰 값으로 초기화
//	char arr[50][51];
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%s", arr[i]);
//	}
//
//	int temp1 = 0, temp2 = 0; //첫째 칸 W일때 B일때 따로 계산
//	for (int x = 0; x < N - 7; x++)	//x좌표와
//	{
//		for (int y = 0; y < M - 7; y++) //y좌표가 도착점에 갈 때까지 반복
//		{
//			//첫째 칸을 W로 만들때
//			for (int i = x; i < x + 8; i++) 
//			{
//				for (int j = y; j < y + 8; j++)
//				{
//					//합이 짝수일 때
//					if (((i - x + j - y) % 2) == 0)
//					{
//						//해당하는 좌표가 W가 아니면
//						if (arr[i][j] != 'W')
//						{
//							temp1++; //다시 칠하기
//						}
//					}
//					//합이 홀수일 때
//					else {
//						//해당하는 좌표가 B가 아니면
//						if (arr[i][j] != 'B')
//						{
//							temp1++; //다시 칠하기
//						}
//					}
//				}
//			}
//			//첫째 칸을 B로 만드는 경우
//			for (int i = x; i < x + 8; i++) {
//				for (int j = y; j < y + 8; j++)
//				{
//					if (((i - x + j - y) % 2) == 0)
//					{
//						if (arr[i][j] != 'B')
//						{
//							temp2++; //다시 칠하기
//						}
//					}
//					else {
//						if (arr[i][j] != 'W')
//						{
//							temp2++; //다시 칠하기
//						}
//					}
//				}
//			}
//			//더 적게 칠한 횟수를 선택
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