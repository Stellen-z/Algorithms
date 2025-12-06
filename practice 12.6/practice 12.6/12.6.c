#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
//char* My_strstr(const char* str1, const char* str2)
//{
//	//模拟实现
//	assert(str1 && str2);
//    const char* p = str1;
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//
//	if (*str2 == '\0')
//		return (char*)str1;
//	while (*p)//确保不是字符串末尾
//		      //p为可能找到子串的起始位置
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2) //考虑同时为\0的情况
//		{
//			s1++;
//			s2++;
//		}
//		//没有进入循环，说明s1 != s2
//		if (*s2 == '\0')
//			return (char*)p;
//		p++;
//	}
//	//循环结束，此时p为\0，无法找到
//	return NULL;
//
//}
//int main()
//{
//	char arr1[] = "adhkenba";
//	char arr2[] = "ken";
//	char* pa = My_strstr(arr1,arr2);
//	if (pa != NULL)
//	{
//		printf("找到了,%s\n",pa);
//	}
//	else
//		printf("没找到\n");
//	return 0;
//}

//int main()
//{
//	//strtok函数
//	char arr[] = "3289038386@qq.com";
//	char sep[] = "@.";
//	char buf[30] = { 0 };
//	strcpy(buf, arr);
//	char* p = NULL;
//	for (p = strtok(arr, sep); p != NULL; p = strtok(NULL, sep))
//	{
//		printf("%s\n", p);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d:%s\n", i, strerror(i));
//	}
//	return 0;
//}
//void* my_memcpy(void* dest, void* src, size_t num)
//{
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	//memcpy函数的使用与模拟实现
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//    my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d:%s\n", i, strerror(i));
//	}
//	return 0;
//}
void* my_memmove(void* dest, void* src, size_t num)
{
	void* ret = dest;
	if (dest < src)//1
	{
		//从前向后拷贝
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else //2 3
	{
		//从后向前拷贝
		while (num--)//先使用后--
		{
			//到这已经是num已经是num-1的值了
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[20] = { 0 };
	my_memmove(arr1 + 2, arr1, 20);
	return 0;
 }