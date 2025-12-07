#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		src = (char*)src + 1;
//		dest = (char*)dest + 1;
//	}
//	return ret;
//}
//void* my_memmove(void* dest, void* src, size_t num)
//{
//	void* ret = dest;
//	//考虑从前向后拷贝还是从后向前拷贝
//	if (src < dest) //从后向前拷贝
//	{
//		while (num--)
//		{
//			//此时num的值为num-1的值
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	else //从前向后拷贝
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	//模拟实现memcpy memmove
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	//my_memcpy(arr2, arr1, 40);
//	my_memmove(arr1 + 2, arr1, 20);
//	return 0;
//}

//int main()
//{
//	//memset函数
//	char arr[] = "hello world!";
//	memset(arr + 2, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//能否将arr的每个元素设置为1
//	memset(arr, 1, 40);
//	return 0;
//}

#include <stdio.h>
int main()
{
	//memcmp函数使用
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[] = { 1,2,3,4,8 };
	int n = memcmp(arr1, arr2, 16);
	if (n < 0)
		printf("<\n");
	else if (n > 0)
		printf(">\n");
	else
		printf("==\n");
	return 0;
}