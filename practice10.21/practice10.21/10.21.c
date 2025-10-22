#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int age = 0;
//
//	scanf("%d", &age);
//	if (age <= 18)
//		printf("少年");
//	else //age>=19
//		if (age <= 44)
//			printf("青年");
//		else//(age>=45)
//			if (age <= 59)
//				printf("中老年");
//			else//(age>=60)
//				if (age <= 89)
//					printf("老年");
//				else//age>=90
//					printf("老寿星");
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	if (age < 18)
//	{
//		printf("少年");
//	}
//	else //age>=18
//	{
//		if (age <= 44)
//		{
//			printf("青年");
//		}
//		else //age>=45
//		{
//			if (age <= 59)
//				printf("中老年");
//			else //age>=60
//			{
//				if (age <= 89)
//					printf("老年");
//				else
//					printf("老寿星");
//			}
//		}
//
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	if (age < 18)
//		printf("少年");
//	else if (age <= 44)
//		printf("青年");
//	else if (age <= 59)
//		printf("中老年");
//	else if (age <= 80)
//		printf("老年");
//	else
//		printf("老寿星");
//
//	return 0;
//}

//相等：==		不相等：！=
//a > b 
//a < b
//a <= b
//a >= b
//a == b 
//a != b //0为假 非0为真
//#include <stdio.h>
//int main()
//{
//	int a = 4;
//	int b = 5;
//
//	int c = a == b;
//	printf("%d", c);
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int k = 6;
//	
//	if (6 == k)
//		printf("hello");
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int age = 0;
//
//	scanf("%d", &age);
//	if (18 <= age && age <= 36)//age>=18 && age<=36
//		printf("青年");
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//
//	scanf("%d %d", &a, &b);
//	if (a < b)
//		m = b;
//	else
//		m = a;
//	printf("%d", m);
//	
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//
//	scanf("%d %d", &a, &b);
//	m = (a > b ? a : b);
//	printf("%d", m);
//
//	return 0;
//}
// 假使flag(变量）为真（非0）；则(!flag)即为假
//#include <stdio.h>
//int main()
//{
//	int flag = 0;
//
//	scanf("%d", &flag);//flag为真就打印
//
//	//if (flag)//如果末尾带上；则无论flag输入什么，都会打印。
//	// ；为结束标志，若有则代表if语句已结束，printf成为了独立的语句，后面的printf无论如何都会执行打印
//	//printf("hehe\n");
// ！为逻辑取反运算符
//	if (!flag)
//		printf("hehe\n");
//
//
//	return 0;
//}
//&为逻辑与运算符，表示“并且” a b必须同时成立 总体才能成立
//#include <stdio.h>
//int main()
//{
//	int month = 0;
//
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//
//	printf("春天\n");
//
//
//	return 0;
//}
//逻辑或运算符|| 表示相反意思  a b只要有一个成立即总体成立
//#include <stdio.h>
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//
//	if (month == 12 || month == 1 || month == 2)
//	printf("冬天");
//
//	return 0;
//}
#include <stdio.h>
int main()
{
	int year = 0;
	scanf("%d", &year);

	int x = (year % 4 == 0 && !year % 100 == 0);
	int y = (year % 400 == 0);

	if (x || y)
		printf("%d", year);

	return 0;
}