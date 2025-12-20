#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'w';
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	const char* ch = "hello world";
//	//ch中存储的到底是什么呢？
//	printf("%s",ch);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello world.";
//	char str2[] = "hello world.";
//	const char* str3 = "hello world.";
//	const char* str4 = "hello world.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int* p1[10];
//	int(*p2)[10];
//	//p1和p2分别都是什么？
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int(*pa)[] = &arr;
//	//数组指针用来存放数组的地址
//	return 0;
//}

//#include  <stdio.h>
//void test(int arr[3][5], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	test(arr, 3, 5);
//	return 0;
//}

//#include  <stdio.h>
//void test(int(*p)[5], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ",*(*(p+i))+j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	test(arr, 3, 5);
//	return 0;
//}

//#include <stdio.h>
////x86环境下
//void test()
//{
//	printf("hello world\n");
//}
//int main()
//{
//	printf(" test: %p\n", test);
//	printf("&test: %p\n",&test);
//	return 0;
//}

//#include <stdio.h>
//void test()
//{
//	printf("hello world");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int  main()
//{
//	void(*pf1)() = test;
//	void(*pf2)() = &test;
//
//	int(*pf3)(int,int) = Add;
//	int(*pf3)(int x, int y) = &Add;
//	//x和y写上和省略都是可行的
//	return 0;
//}

//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pf)(int, int) = Add;
//	//将函数地址存放进函数指针变量pf中
//	printf("%d\n", (*pf)(1, 2));
//	printf("%d\n", (*pf)(4, 6));
//	//利用函数指针调用函数
//	return 0;
//}

//int(*parr1[3])();
//int* parr2[3]();
//int (*)() parr3[3];

//#include <stdio.h>
//int add(int a, int b)
//{
//    return a + b;
//}
//int sub(int a, int b)
//{
//    return a - b;
//}
//int mul(int a, int b)
//{
//    return a * b;
//}
//int div(int a, int b)
//{
//    return a / b;
//}
//int main()
//{
//    int x, y;
//    int input = 1;
//    int ret = 0;
//    do
//    {
//        printf("*************************\n");
//        printf("  1:add           2:sub  \n");
//        printf("  3:mul           4:div  \n");
//        printf("  0:exit                 \n");
//        printf("*************************\n");
//        printf("请选择： ");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            printf("请输入操作数");
//            scanf("%d %d", &x, &y);
//            ret = add(x, y);
//            printf("ret = %d\n", ret);
//            break;
//        case 2:
//            printf("请输入操作数:");
//            scanf("%d %d", &x, &y);
//            ret = sub(x, y);
//            printf("ret = %d\n", ret);
//            break;
//        case 3:
//            printf("请输入操作数:");
//            scanf("%d %d", &x, &y);
//            ret = mul(x, y);
//            printf("ret = %d\n", ret);
//            break;
//        case 4:
//            printf("请输入操作数:");
//            scanf("%d %d", &x, &y);
//            ret = div(x, y);
//            printf("ret = %d\n", ret);
//            break;
//        case 0:
//            printf("退出程序\n");
//            break;
//        default:
//            printf("选择错误\n");
//            break;
//        }
//    } while (input);
//    return 0;
//}

//#include <stdio.h>
//int add(int a, int b)
//{
//    return a + b;
//}
//int sub(int a, int b)
//{
//    return a - b;
//}
//int mul(int a, int b)
//{
//    return a * b;
//}
//int div(int a, int b)
//{
//    return a / b;
//}
//int main()
//{
//    int x, y;
//    int input = 1;
//    int ret = 0;
//    do
//    {
//        printf("*************************\n");
//        printf("  1:add           2:sub  \n");
//        printf("  3:mul           4:div  \n");
//        printf("  0:exit                 \n");
//        printf("*************************\n");
//        printf("请选择：");
//        scanf("%d", &input);
//        int(*p[5])() = { NULL,add,sub,mul,div };
//        if ((input <= 4 && input >= 1))
//        {
//            printf("请输入操作数：");
//            scanf("%d %d", &x, &y);
//            int ret = (*p[input])(x, y);
//            printf("ret = %d\n", ret);
//        }
//        else if (input == 0)
//        {
//            printf("退出程序\n");
//            break;
//        }
//        else
//            printf("输入错误，请重新输入\n");
//    } while (input);
//    return 0;
//}