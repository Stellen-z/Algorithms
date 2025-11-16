#define _CRT_SECURE_NO_WARNINGS
//函数指针数组
//#include <stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	add(3, 5);
//	//函数指针
//	int (*p)(int,int) = add;
//	//函数指针数组
//	int (*p[5])(int, int) = { add };
//	return 0;
//}

//计算器的实现
//#include <stdio.h>
//void menu()
//{
//	printf("*********************\n");
//	printf("*****1.Add 2.Sub*****\n"); 
//	printf("*****3.Mul 4.Div*****\n");
//	printf("*****0.exit     *****\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请输入：\n");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//			break;
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			//转移表
//			int(*pArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
//			printf("请输入操作数：");
//			scanf("%d %d", &x, &y);
//			int r = pArr[input](x, y);
//			printf("%d\n", r);
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input);
//	return 0;
//}

//回调函数
//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//void test(int (*pf)(int,int))
//{
//	//此时pf中就是函数Add的地址 即pf等价于Add
//	int r = pf(20,30);
//	printf("%d", r);
//}
//int main()
//{
//	test(Add);
//	return 0;
//}

//#include <stdio.h>
//void menu()
//{
//	printf("*********************\n");
//	printf("*****1.Add 2.Sub*****\n"); 
//	printf("*****3.Mul 4.Div*****\n");
//	printf("*****0.exit     *****\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void Cacl(int (*pf)(int, int))//参数类型为函数指针
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数：");
//	scanf("%d %d", &x, &y);
//	int r = pf(x, y);
//	printf("%d", r);
//}
//int main()
//{
//
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Cacl(Add);
//		case 2:
//			Cacl(Sub);
//		case 3:
//			Cacl(Mul);
//		case 4:
//			Cacl(Div);
//		case 0:
//		{
//			printf("退出计算器\n");
//			break;
//		}
//		default:
//		{
//			printf("输入错误，请重新输入\n");
//		}
//		}
//	} while (input);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>

//int cmp_int(const void* p1, const void* p2)
//{
//	//void* 类型指针变量不能直接解引用
//	//将指针变量强制类型转换为需要比较的类型
//	/*if (*(int*)p1 > *(int*)p2)
//		return 1;
//	else if (*(int*)p1 < *(int*)p2)
//		return -1;
//	else
//		return 0;*/
//	return (*(int*)p1 - *(int*)p2);
//}
//void print_arr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 3,4,7,1,9,0,5,8,2,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr,sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr,sz);
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stu
{
	char name[20];    //名字
	int age;          //年龄
};
//int cmp_stu_by_name(const void* p1,const void* p2)
//{
//	//return (*(struct Stu*)p1).age - (*(struct Stu*)p2).age;
//	return (((struct Stu*)p1)->age - ((struct Stu*)p2)->age);
//}

int cmp_stu_by_name(const void* p1, const void* p2)
{
	//字符串比大小比的是对应位置ASCII码值的大小
	return strcmp(((struct Stu*)p1)->name ,((struct Stu*)p2)->name);
}

void print_arr(struct Stu arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s：%d\n", arr[i].name, arr[i].age);
	}printf("\n");
}

int main()
{
	struct Stu arr[] = { {"zhangsan",20},{"lisi",38 },{"wangwu",18} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
	print_arr(arr, sz);
	return 0;
}