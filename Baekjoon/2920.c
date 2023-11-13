//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int a, b, c, d, e, f, g, h;
//	scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
//	int array[8] = { a,b,c,d,e,f,g,h };
//	int num=0,num2=0;
//	int n = 0;
//
//	for (int j = 1; j < 9; j++)
//	{
//		if (array[j - 1] == j)
//		{
//			num++;
//			if (num == 8)
//			{
//				printf("ascending");
//				exit(0);
//			}
//		}
//		else
//			break;
//	}
//	for (int k = 8; k >= 1; k--)
//	{
//		if (array[n] == k)
//		{
//			num2++;
//			n++;
//			if (num2 == 8)
//			{
//				printf("descending");
//				exit(0);
//			}
//		}
//		else
//			break;
//	}
//	printf("mixed");
//
//
//
//
//	return 0;
//}
// 
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int arr[8];
//	for (int i = 0; i <= 7; i++) {
//		scanf("%d", &arr[i]);
//	}
//	if (arr[0] == 1 && arr[1] == 2 && arr[2] == 3 && arr[3] == 4 && arr[4] == 5 && arr[5] == 6 && arr[6] == 7 && arr[7] == 8) 
//		printf("ascending");
//	else if (arr[0] == 8 && arr[1] == 7 && arr[2] == 6 && arr[3] == 5 && arr[4] == 4 && arr[5] == 3 && arr[6] == 2 && arr[7] == 1) 
//		printf("descending");
//	else 
//		printf("mixed");
//	return 0;
//}