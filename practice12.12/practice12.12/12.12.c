#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//复习内存函数
//1.memcpy
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 0 };
//	int* p = memcpy(arr1, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//模拟实现memcpy函数
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* p = dest;
//	//一个字节一个字节拷贝
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return p;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 0 };
//	int* p = my_memcpy(arr1, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//2.memmove
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10};
//	memmove(arr1+2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);;
//	}
//	return 0;
//}
//memmove模拟实现
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	if (src < dest)
//	{
//		//从后向前存
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//		return ret;
//	}
//	else
//	{
//		//从前向后存
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//		return ret;
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10};
//	int*p = my_memmove(arr1+2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);;
//	}
//	return 0;
//}
//3.memset函数
//memset是⽤来设置内存的，将内存中的值以字节为单位设置成想要的内容。
//int main()
//{
//	char arr[] = "hell0 world!";
//	memset(arr, 'x', 6);
//	printf("%s", arr);
//	return 0;
//}
//4.memcmp函数
//int main()
//{
//	char buf1[] = "hello";
//	char buf2[] = "world";
//	int n =memcmp(buf1, buf2, sizeof(buf1));
//	if (n > 0)
//		printf(">");
//	else if (n < 0)
//		printf("<");
//	else
//		printf("==");
//	return 0;
//}