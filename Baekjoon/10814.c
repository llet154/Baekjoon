//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct
//{
//	int age;
//	int idx;
//	char name[101];
//}member;
//
//
//int compare(const void* arg1, const void* arg2)
//{
//	member* a = (member*)arg1;
//	member* b = (member*)arg2;
//	if (a->age > b->age)
//	{
//		return 1;
//	}
//	else if (a->age < b->age)
//	{
//		return -1;
//	}
//	else
//	{
//		if (a->idx > b->idx)
//		{
//			return 1;
//		}
//		else
//		{
//			return -1;
//		}
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int i, N;
//
//	scanf("%d", &N);
//	member* list = (member*)malloc(N * sizeof(member));
//
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d %s", &list[i].age,list[i].name);
//		list[i].idx = i;
//	}
//
//	qsort(list, N, sizeof(list[0]), compare);
//
//	for (i = 0; i < N; i++)
//	{
//		printf("%d %s\n",list[i].age,list[i].name);
//	}
//
//	free(list);
//
//	return 0;
//}