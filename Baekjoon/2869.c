//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int A, B, V, day = 0;
//	scanf("%d %d %d", &A, &B, &V);
//	/*while (V > 0)   반복문을 이용하니 시간초과가 남
//	{
//		V -= A;
//		cnt++;
//		if (V > 0)
//		{
//			V += B;
//		}
//	}*/
//	/*
//	A-B: 하루에 올라가는 실질적 길이
//	V-B: 달팽이가 올라가야 하는 총길이
//	여기서 B를 빼주는 이유는 마지막날에 A를 올라가서 정상을 찍으면 미끄러지는 B는
//	고려하지 않으므로 
//	*/
//	day = (V - B) / (A - B);
//	if ((V - B) % (A - B) != 0)
//	{
//		day++;
//	}
//	printf("%d", day);
//
//
//	return 0;
//}