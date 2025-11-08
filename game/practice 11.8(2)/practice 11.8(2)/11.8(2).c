#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//}
int main()
{
	int a = 10;
	int* p = &a;
	*p = 0;
	printf("%d", a);
	return 0;
}