#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
////在屏幕上输出9*9乘法口诀表
int main()
{
	int num1[] = { 1,2,3,4,5,6,7,8,9 };
	int num2 [] = { 1,2,3,4,5,6,7,8,9 };

	int i = 0;//横行下标
	int j = 0;//竖行下标

	//打印列号
	/*for (i = 0; i < 9; i++)
	{
		printf("%d ", i);
	}printf("\n");*/

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			int c = num1[i] * num2[j];
			printf("%d*%d =%d ",num1[i], num2[j], c);
		}printf("\n");
	}

	return 0;
}
//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果
//int main()
//{
//	double i = 0;
//	double sum1 = 0;
//	for (i = 1; i < 100; i += 2)
//	{
//		sum1 += 1 / i;
//	}
//	double j = 0;
//	double sum2 = 0;
//	for (j = 2; j <= 100; j += 2)
//	{
//		sum2 += 1/j;
//	}
//	double sum = sum1 - sum2;
//	printf("%f", sum);
//	return 0;
//}
//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int i;
//	int count = 0;
//	
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//打印1000年到2000年之间的闰年
//闰年条件
//能被 4 整除，但不能被 100 整除；
//能被 400 整除
//int main()
//{
//	int i;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 400 == 0) || ((i % 4 == 0) && (i / 100 != 0)))
//			printf("%d ", i);
//	}
//	return 0;
//}
//给定两个数，求这两个数的最大公约数
//例如：输入：20 40 输出：20
//题解：两个数的最大公约数 = 较小数 和 两数「相除余数」的最大公约数，重复此过程直到余数为 0，最后非零的除数即为最大公约数
//int main()
//{
//	int i, j;
//	scanf("%d %d", &i, &j);
//
//	while (j != 0)
//	{
//		int temp = j;
//		j = i % j;
//		i = temp;
//	}
//	printf("%d", i);
//	return 0;
//}
