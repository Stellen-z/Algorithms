#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//指针-指针：得到的是两个元素之间的个数的绝对值
//前提;两个指针指向同一块空间，否则不能相减
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%lld", &arr[9] - &arr[0]);
//	//指针算术运算的规则
//	//对于指针p（指向某类型的变量），p + n的含义是：从p的当前地址开始，向后偏移n个 “元素类型大小” 的字节数。
//	return 0;
//}
//复习求字符串长度函数
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = { "abcdef" };
//	printf("%zu", strlen(arr));
//	return 0;
//}
//数组名其实也是数组首元素地址
//写一个函数，求字符串长度
//#include <stdio.h>
//size_t my_strlen(char* p)//数组名其实也是数组首元素地址
//{
//	int count = 0;
//	while (*p != '\0') //"\0"的ASCII码值为0，因此可以省略，简写为(*p)
//	{
//		count++;
//		p++; //p+n表示从当前地址开始，向后偏移n个元素类型大小的字节数
//	}
//	return count;
//}
//int main()
//{
//	char arr1[] = { "abcdef" };                //字符串后面有\0
//	char arr2[] = { 'a','b','c','d','e','f'};  //单引号的字符没有\0,会不停寻找\0  
//
//	printf("%zu\n", my_strlen(arr1)); //数组名其实也是数组首元素地址
//	printf("%zu\n", my_strlen(arr2)); //数组名其实也是数组首元素地址
//
//	return 0;
//}
//#include <stdio.h>
//size_t my_strlen(char* p)
//{
//	char* start = p;
//	while (*p) //使用p来找到\0
//	//解引用指针变量后得到的是ASCII值
//	//计算机中的字符默认都是以ASCII存放的
//	{
//		p++;
//	}
//	return p - start;  //指针—指针是通过地址相减即指针变量相减，不是解引用
//	//指针变量存的是地址，而解引用就相当于是通过地址直接读取数据
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	printf("%zu", my_strlen(arr));
//	return 0;
//}
//打印数组内容
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr; //数组名即为首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (p < arr + sz)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    const int a = 10;
//	/*a = 20;
//	printf("%d", a);*/
//	const int* pa = &a;
//	*pa = 20;
//	printf("%d", *pa);
//	
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	const int a = 10;
//	const int* pa = &a;//限制 *pa 即数值，那么存放其他地址即可改变
//	int b = 20;
//	//*pa = 20;err
//	pa = &b;  //指针变量存放的是地址
//	printf("%d", *pa);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	const int a = 10;
//	int* const pa = &a;
//	//pa是指针变量，里面存放的是地址，加上const后地址便被限制了
//	int b = 20;
//	*pa = b;
//	printf("%d", *pa);
//	return 0;
//}
//野指针：
//1.指针未初始化
//#include <stdio.h>
//int main()
//{
//	int* p;
//	*p = 20;//err
//
//	return 0;
//}\
2.指针越界访问，循环执行了11次
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//3.指针指向空间释放
#include <stdio.h>
int* test()
{
	int n = 100;
	//...
	return &n;
}
int main()
{
	int* p = test();

	printf("%d", *p);
	return 0;
}