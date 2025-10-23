#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int cnt = 0;
//	scanf("%d", &i);
//
//	do
//	{
//		printf("%d\n", i % 10);
//		cnt++;
//	} while (i = 0);
//	return 0;
//
//}
//打印100-200之间的素数（只能被1和本身整除）
//#include <stdio.h>
//int main()
//{
//	int i = 0;
////假设i是素数
//	//先打印100-200之间的数
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		//判断能否被2 - i-1之间的数整除
//		int flag = 1;//假设i是素数
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0) //i为素数
//			{
//				flag = 0;//i不是素数
//				break;
//			}	
//		}
//		if (flag = 1)
//			printf("%d\n", i);
//	}
//	
//	return 0;
//}
//   sqrt 库函数，开平方 使用时包含math.h头文件
//system 执行系统命令函数 使用时包含stdlib，h
//stramp 用在字符串比大小 包含string.h
//打印100-200之间的素数
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//假设为真
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)//若在 i % j == 0 时输出 “不是	素数”，但此时内层循环还没遍历完所有 j，无法确定最终结果；
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d\n", i);
//		}
//	} 
//	return 0;
//}
//写一个代码打印1-100之间所有3的倍数的数字
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//
//	for (i = 3; i <= 100; i += 3)
//		printf("%d ", i);
//
//	return 0;
//}
// 从大到小输出，写代码将三个整数数按从大到小输出。
//
//例如：
//
//输入：2 3 1
//
//输出：3 2 1
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//
//	scanf("%d%d%d", &x,&y,&z);
//	if (x > y > z)
//	{
//		printf("%d %d %d", x,y,z);
//	}
//	else if (x > z > y)
//	{
//		printf("%d %d %d", x,z,y);
//	}
//	else if (y > x > z) {
//		printf("%d %d %d",y,x,z);
//	}
//
//
//	return 0;
//}
//system 
//shutdowm -a        取消关机
//shutdown -s -t 60  关机（60秒内)
