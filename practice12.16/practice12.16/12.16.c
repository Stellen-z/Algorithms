#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%s\n", __TIME__);
//	printf("%s\n", __DATE__);
//	printf("%d\n", __LINE__);
//	return 0;
//}

//#define name(parent-list) stuff

//#define SQUARE(x) x*x
#define SQUARE(x) ((x)*(x))
int main()
{
	int a = 10;
	int r = SQUARE(a + 1);
	printf("%d\n", r);
	return 0;
}