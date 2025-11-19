#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp_int(const void* p1,const void* p2)
{
	//目的是比较两个整形数据大小的
	//p1就是一个整形的地址，指向一个整形数据，p2同理
	//强制类型转换为整型指针
	//*(int*)p1 - *(int*)p2
	return (*(int*)p1 - *(int*)p2);
}
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}printf("\n");
}
struct Stu
{
	char name[30];
	int age;
};
int cmp_stu_by_age(const void* p1, const void* p2)
{
	//return ((*(struct Stu*)p1).age - (*(struct Stu*)p2).age);
	//(struct Stu*)p1->name  因为强制类型转换的优先级低于结构访问操作符，因此需要括起来后在用结构访问操作符
	return (((struct Stu*)p1)->age - ((struct Stu*)p2)->age);
}
int cmp_stu_by_name(const void* p1, const void* p2)
{
	//strcmp原型
	//int strcmp(const char* str,const char* str2) 两个字符指针，即比较字符串大小
	//strcmp头文件为<string.h>
	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
}
void print_stu(struct Stu arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s:%d ", arr[i].name, arr[i].age);
	}printf("\n");
}

//int main()
//{
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//print_arr(arr, sz);
	//qsort(arr, sz, sizeof(arr[0]),cmp_int);//第四个参数需要的就是指针即地址
	//bubble_sort();
	// print_arr(arr, sz);
	//验证结构体的比较大小，用qsort实现
	//struct Stu arr[] = { {"zhangsan",20},{"lisi",38},{"wangwu",18} };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//print_stu(arr, sz);
	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
	//print_stu(arr, sz);
	//return 0;
//
void Swap(char* buf1, char* buf2, size_t width)
{
	while (width)
	{
		char buf = 1;
		buf = *buf1;
		*buf1 = *buf2;
		*buf2 = buf;
		buf1++;
		buf2++;
		width--;
	}
}
void bubble_sort(void* base, size_t sz, size_t width,int (*cmp)(const void* p1,const void* p2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//if(arr[i] > arr[j+1])
			//j为元素下标 从0到j只需跳过j个元素，总长度即为 j*width 字节 
			//转化为char*正好一次跳过一个字节，共需j*width 次
			//通过首地址和强制类型转换为char*类型 * 宽度 拿到j和j+1元素的地址
			if (cmp((char*)base+j*width ,(char*)base+(j+1)*width)> 0)
			{
				//交换arr[j] arr[j+1]
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

//int main()
//{
//	//模拟实现sqrt函数(采用冒泡排序思想）
//	int arr[10] = { 3,5,4,7,9,12,4,6,8,91 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//	return 0;
//}

int main()
{
	struct Stu arr[] = { {"zhangsan",20},{"lisi",38},{"wangwu",18} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_stu(arr, sz);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
	print_stu(arr, sz);
	return 0;
}