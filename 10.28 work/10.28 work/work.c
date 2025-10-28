#define _CRT_SECURE_NO_WARNINGS
//打印1—100之间3的倍数
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	for (n = 3; n <= 99; n+=3)   //for循环后面没有分号，有分号会导致空语句
//	{
//		printf("%d ", n);
//	}
//	return 0;
//}
//写代码将三个整数数按从大到小输出。
#include <stdio.h>
int main()
{
	int x, y, z;
	int temp;
	scanf("%d %d %d", &x, &y, &z);

	if (x < y)
	{
		temp = x;
		x = y;
		y = temp;
	}
	if (x < z)
	{
		temp = x;
		x = z;
		z = temp;
	}
	//确保x为最大值，下面确保y次之
	if (y < z)
	{
		temp = y;
		y = z;
		z = temp;
	}
	printf("%d %d %d\n", x, y, z);
	return 0;
}