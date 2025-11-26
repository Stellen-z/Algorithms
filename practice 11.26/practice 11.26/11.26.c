#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double d = 16.0;
//	double r = sqrt(d);
//	printf("%lf\n", r);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	ret_type name(形参)
//	{
//
//	}
//	return 0;
//}

//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a, b);     //调用Add函数，实现加法
//	printf("%d\n", c);
//	return 0;
//}

//将一个整型数组的内容全部置为-1，再写一个函数打印数组的内容
//#include <stdio.h>
//void set_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = -1;
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//元素个数
//	set_arr(arr, sz);                     //置为-1
//	print_arr(arr, sz);                   //打印数组
//	return 0;
//}

//函数的嵌套
//#include <stdio.h>
//int is_leap_year(int year)
//{
//	if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
//		return 1;
//	else
//		return 0;
//}
//int get_days_of_month(int year,int month)
//{
//	int arr[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int day = arr[month];
//	if (is_leap_year(year) && month == 2)
//		day += 1;
//	return day;
//}
//
//int main()
//{
//	int year = 0;   //想要知道天数的年份
//	int month = 0;  //想要知道天数的月份
//	scanf("%d %d", &year, &month);
//	int d = get_days_of_month(year,month);
//	printf("%d\n", d);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	printf("%zd\n", strlen("abcdef"));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//
// #include <stdio.h>
////函数声明
//void is_leap_year(int year);
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	//判断某年是否闰年
//	is_leap_year(year);
//	return 0;
//}
//void is_leap_year(int year)
//{
//	if ((year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0))
//		printf("闰年\n");
//	else
//		printf("非闰年\n");
//}

