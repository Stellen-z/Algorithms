#define _CRT_SECURE_NO_WARNINGS
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//#include <stdio.h>
//int main()
//{
//	int x, y; //x为奇数项y为偶数项
//	double sum1 = 0;
//	double sum2 = 0; //所计算类型为小数，应该用double或float来存储变量和输出
//
//	for (x = 1; x <= 99; x += 2)
//	{
//		sum1 = sum1 + 1.0 / x;
//	}
//	for (y = 2; y <= 100; y += 2)
//	{
//		sum2 = sum2 + 1.0 / y;
//	}
//	double result = sum1 - sum2;
//	printf("1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值为：%lf\n", result);
//	return 0;
//}
//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int count = 0;
//
//	while (i <= 100)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//		i++;
//	}
//	printf("1到 100 的所有整数中9的个数为：%d", count);
//	return 0;
//}
//用for循环写：
//#include <stdio.h>
//int main()
//{
//	int i,digit;
//	int count = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9) //由于i是整型类型，因此当i>90时，i / 10 会返回整数，小数部分会被截断
//		{
//			count++;
//		}
//	}
//	printf("9的个数为%d", count);
//	return 0;
//}
//打印1000年到2000年之间的闰年
//满足以下任一条件即为闰年：
//能被 4 整除，且不能被 100 整除；
//能被 400 整除。
//#include <stdio.h>
//int main()
//{
//	int i;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		printf("%d ", i);
//	}
//	return 0;
//}
//求10个整数中最大值
#include <stdio.h>
int main()
{
	int arr[10];
	//scanf("%d ", arr);
	int i = 0; //i为下标

	printf("请输入十个整数：\n");

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);//遍历所有数字
	}
	int max = arr[0];
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("最大值为:%d\n", max);
	return 0;
}