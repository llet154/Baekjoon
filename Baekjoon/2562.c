//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//int main()
//{
//	int a[9], max, num;
//	int one, two, three, four, five, six, seven, eight, nine;
//	scanf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d", &one, &two,&three,&four,&five,&six,&seven,&eight,&nine);
//	a[0] = one;
//	a[1] = two;
//	a[2] = three;
//	a[3] = four;
//	a[4] = five;
//	a[5] = six;
//	a[6] = seven;
//	a[7] = eight;
//	a[8] = nine;
//	max = a[0];
//	num = 1;
//	for (int i = 1; i < 9; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//			num = i + 1;
//		}
//		else
//		{
//			max = max;
//		}
//	}
//	printf("%d\n%d", max, num);
//
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int a[9];
//	int i, num;
//	int max = 0;
//	for (i = 0; i < 9; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 9; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//			num = i;
//		}
//	}
//	printf("%d\n%d", max, num+1);
//
//
//	return 0;
//}