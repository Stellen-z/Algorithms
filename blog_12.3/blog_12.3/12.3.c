#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//printf("%p\n", &a);
//	//printf("%p\n", pa);
//	*pa = 0;
//	printf("%d\n", *pa);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(double*));
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	int* pi = &n;
//	*pi = 0;
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	char* pa = &n;
//	*pa = 0;
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return  0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	//int* pa = &a;
//	//char* pc = &a;
//	void* pa = &a;
//	void* pc = &a;
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	m = 20;//m是可以修改的
//	const int n = 0;
//	n = 20;//n是不能被修改的
//
//		return 0;
//}
//#include <stdio.h>
//int main()
//{
//	const int a = 0;
//	int* pa = &a;
//	printf("a = %d\n", a);
//	*pa = 10;
//	printf("a = %d\n", a);
//	return 0;
//}

#include <stdio.h>
//void test1()
//{
//	int n = 10;
//	int m = 20;
//	const int* p = &n;
//	*p = 20;//ok?
//	p = &m; //ok?
//}
//void test2()
//{
//	int n = 10;
//	int m = 20;
//	int* const p = &n;
//	*p = 20;//ok?
//	p = &m;//ok?
//}
//void test3()
//{
//	int n = 10;
//	int m = 20;
//	int const * const p = &n;
//	*p = 20;//ok?
//	p = &m;//ok?
//}
int main()
{
	//test1();//测试const在左边的情况
	//test2();//测试const在右边的情况
	test3();//测试两边都有cosnt的情况
	return 0;
}