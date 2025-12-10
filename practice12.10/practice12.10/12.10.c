#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//union Un
//{
//	int i;
//	char c;
//};
//int main()
//{
//	union Un u;
//	printf("%p\n",&u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}
//int check_sys()
//{
//	union
//	{
//		char i;
//		int j;
//	}u;
//	u.i = 1;
//	return u.j;
//}
//int main()
//{
//	if (check_sys() == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

//利用枚举优化计算器的简化实现
//enum Option
//{
//	Exit,
//	Add,
//	Sub,
//	Mul,
//	Div
//};
//void menu()
//{
//	printf("*******************\n");
//	printf("***1.add***2.sub***\n");
//	printf("***3.mul***4.div***\n");
//	printf("***0.exit**********\n");
//}

//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入数字：");
//		scanf("%d\n", &input);
//		switch (input)
//		{
//		case Add:
//			break;
//		case Sub:
//			break;
//		case Mul:
//			break;
//		case Div:
//			break;
//		case Exit:
//			break;
//		}
//	} while (input);
//	return 0;
//}
//#include <stdlib.h>
//int main()
//{
//	int n = 0;
//	printf("请输入要开辟的整型数：");
//	scanf("%d", &n);
//	printf("\n");
//	//假设申请20个字节的空间，存放5个整数
//	int* p =(int*)malloc(n * sizeof(int));
//	//判断是否开辟成功
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//开辟成功
//	//使用这块内存空间
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i + 1;
//		printf("%d ", p[i]);
//	}
//	//使用完之后进行回收
//	free(p);
//	//free回收不会将其置为空指针
//	//手动置为NULL
//	p = NULL;
//	return 0;
//}

//calloc函数
#include <stdlib.h>
int main()
{
	int* p = (int*)calloc(5, sizeof(int));
	//int* p = (int*)malloc(5*sizeof(int));
	if (p == NULL)
	{
		perror("calloc");
		return 1;
	}
	//开辟成功
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", p[i]);
	}

	//释放空间
	free(p);
	p = NULL;
	return 0;
}