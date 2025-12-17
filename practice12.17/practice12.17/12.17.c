#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#define SQUARE(x) ((x)*(x))
//#define MAX(x,y) ((x>y)?(x):(y))
/*#define GENERIC_MAX(type)     \
type type##_max(type x,type y)\
{                             \
   return ((x>y)?(x):(y));    \                       \
}  */ 
#define M 100
#undef M
//int main()
//{
//	/*int r = SQUARE(4);
//	printf("%d\n", r);*/
//	/*int a = 5;
//	int ret = SQUARE(a + 1);
//	printf("%d\n", ret);*/
//	/*int a = 10;
//	int b = 20;
//	int r = MAX(a, b);
//	printf("%d", r);*/
//	//int m = int_max(2, 3);
//	//printf("%d\n", m);
//	//printf("%d\n", M);
//	return 0;
//}
//三目操作符：
//条件表达式 ? 表达式1 : 表达式2;
#define __DEBUG__
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
        #ifdef __DEBUG__
		printf("%d\n", arr[i]);
        #endif
	}
}
