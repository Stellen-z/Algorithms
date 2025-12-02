#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//#include <assert.h>
//int My_strcmp(const char* str1, const char* str2)
//{
//	//assert<str1 && str2>;
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//			return 1;
//	else
//			return -1;
//}
//int My_strcmp(const char* str1, const char* str2)
//{
//	while (*str1++ == *str2)//错误 当两个字符均为'\0'时，不会进入循环体
//                                 会继续往后走，造成越界访问
//	{
//		if (*str1 == '\0')
//			return 0;
//	}
//	if (*str1 > *str2)
//		return *str1 - *str2;
//	else
//		return *str1 - *str2;
//}
//int main()
//{
//	//strcmp函数
//	//int strcmp(const char* str1,const char* str2)
//	char arr1[] = "abc";
//	char arr2[] = "abc";
//	int r = My_strcmp(arr1, arr2);
//	if (r > 0)
//		printf("arr1 > arr2");
//	else if (r < 0)
//		printf("arr1 < arr2");
//	else
//		printf("arr1 == arr2");
//
//	return 0;
//}
//使用strncpy函数
/*int main()
{
	char arr1[] = "abc\0def";
	char arr2[] = "xxxxxxxxx";
	char* pa = strncpy(arr2, arr1,6);
	如果覆盖不完，会补上\0
	printf("%s\n", pa);
	return 0;
}*/
//使用strncat函数
//;
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = "xxxxxxxxx";
//	char* pa = strncat(arr2, arr1,6 );
//	return 0;
//}
;
//int main()
//{
//	char arr1[] = "aefdcbagf";
//	char arr2[] = "cba";
//	char* p = strstr(arr1, arr2);
//	if (p != NULL)
//	{
//		printf("找到了，%s\n", p);
//	}
//	else
//		printf("没找到\n");
//	return 0;
//
//}
char* My_strstr(const char* str1, const char* str2)
{

}

int main()
{
	char arr1[] = "aefdcbagf";
	char arr2[] = "cba";
	char* p = My_strstr(arr1, arr2);
	if (p != NULL)
	{
		printf("找到了，%s\n", p);
	}
	else
		printf("没找到\n");
	return 0;
}