#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	float a = 9.5f;
//	//二进制：1001.1
//	//1.0011*2^3
//	//S = (-1)^0
//	//M = 1.0011
//	//E = 3
//	//0	10000010 00110000000000000000000
//	//01000001 00011000 00000000 00000000\
//	//0x41     18       00       00
//	return 0;
//}
//复习二分查找
//int main()
//{
//	int arr[] = { 1,3,6,7,9,20 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = right + (left - right) / 2;
//	int key = 7;
//	while (left <= right)
//	{
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d", mid);
//			break;
//		}
//	}
//	
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	float math;
//};
//int main()
//{
//	struct Stu s1 = { "zhangsan",18,92.5f };
//	struct Stu s2 = { .math = 97.5f,.name = "lisi",.age = 18 };
//	printf("%f %d %s", s2.math, s2.age, s2.name);
//	//结构体变量.成员名
//	//结构体指针->成员名
//	return 0;
//}
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//12 8 16 32





int main()
{
	//struct S1
	//{
	//	char c1;
	//	int i;
	//	char c2;
	//};
	//printf("%zd\n",sizeof(struct S1));
	//练习2
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//printf("%zd\n", sizeof(struct S2));
	//练习3
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//printf("%zd\n", sizeof(struct S3));
	//练习4结构体嵌套问题
//	struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//printf("%zd\n", sizeof(struct S4));
//	return 0;
//}