//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#define SIZE 10000
//
//int stack[SIZE];
//int top_n = -1;
//
//void empty()
//{
//	if (top_n < 0)
//	{
//		printf("%d\n", 1);
//	}
//	else
//	{
//		printf("%d\n", 0);
//	}
//}
//int IsFull()
//{
//	if (top_n >= SIZE - 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//void push(int value)
//{
//	if (IsFull() == 1)
//	{
//		printf("Ω∫≈√¿Ã ∞°µÊ √°Ω¿¥œ¥Ÿ.");
//	}
//	else
//	{
//		stack[++top_n] = value;
//	}
//}
//
//void pop()
//{
//	if (top_n<0)
//	{
//		printf("-1\n");
//	}
//	else
//	{
//		printf("%d\n", stack[top_n--]);
//	}
//}
//
//void size()
//{
//	printf("%d\n", top_n+1);
//}
//
//void top()
//{
//	if (top_n < 0)
//	{
//		printf("-1\n");
//	}
//	else
//	{
//		printf("%d\n", stack[top_n]);
//	}
//}
//
//int main()
//{
//	int N, X;
//	scanf("%d", &N);
//	
//	for (int i = 0; i < N; i++)
//	{
//		char input[10];
//		scanf("%s", input);
//
//		if (strcmp(input, "pop") == 0)
//		{
//			pop();
//		}
//		else if (strcmp(input, "size") == 0)
//		{
//			size();
//		}
//		else if (strcmp(input, "empty") == 0)
//		{
//			empty();
//		}
//		else if (strcmp(input, "top") == 0)
//		{
//			top();
//		}
//		else if (strcmp(input, "push") == 0)
//		{
//			scanf("%d", &X);
//			push(X);
//		}
//	}
//
//
//
//	return 0;
//}