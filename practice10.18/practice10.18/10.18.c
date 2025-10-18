#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 24;
//	int b = 11;
//
//	printf("%d\n", a + b);
//	return 0;
//}
//int main()
//{
//	int a = 27;
//	int b = 9;
//	int c = a * b;
//	int d = a / b;
//
//	printf("%d\n", c);
//	printf("%d\n", d);
//
//	return 0;
//}
//int main()
//{
//	
//	printf("%f\n",10/4.0 );
//	printf("%d\n",10/4 );
//	printf("%lf\n", 10 / 4.0);
//
//	return 0;
//}
//int main()
//{
//	int goal = (30.0 / 4);
//	double score = (30.0 / 7);
//	
//	printf("%d\n", goal);//除法中两端如果都是整数，执行整数除法
//	printf("%f\n",score);//除法中两端如果出现了浮点数，执行浮点数除法
//
//	return 0;
//}
//int main()
//{
//	int a = 20;
//	int b = 3;
//	int goal = a % b;
//
//	printf("%d\n", goal);
//	return 0;
//}
//int main()
//{
//	float x = 6.0 / 4;//整数除法只会保留整数，小数会被舍弃
//	int y = 6 / 4;
//	printf("%f\n", x);
//	printf("%d\n", y);
//
//	return 0;
//}
//int main()
//{
//	int a = 11 % -5;//负数的模取决于第一个计算数
//
//	printf("%d", a);
//	return 0;
//}
//+= -= *= /= %=  复合赋值
//int a = 5;
//a -= 2;
//int main()
//{
//
//	int a = 10;
//    int b = a++;//	后++：先使用再++
//	//b=a a=a+1
//	
//	printf("%d\n", a);//11
//	printf("%d\n", b);//10
//
//	return 0;
//}
//int main()
//{
//	int x = 10;
//
//	printf("%d\n", x--);
//	printf("%d\n", x);
//	return 0;
//}
//int main()
//{
//	printf("%f\n", 123.456);
//	printf("%-12f\n", 123.456);
//
//	return 0;
//}
int main()
{
	printf("%7.2f\n", 3.1415926);
	printf("%-7.2f\n", 3.1415926);


	return 0;
}