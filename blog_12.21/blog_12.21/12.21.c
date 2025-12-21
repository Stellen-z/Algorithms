#define _CRT_SECURE_NO_WARNINGS
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
////利用函数指针存放函数的地址
//void cacl(int(*pf)(int, int))
//{
//    int x, y;
//    int ret = 0;
//    printf("请输入操作数：");
//    scanf("%d %d", &x, &y);
//    ret = pf(x, y);
//    printf("ret = %d\n", ret);
//}
//int main()
//{
//    int input = 1;
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
//            cacl(add);//回调函数
//            break;
//        case 2:
//            cacl(sub);//回调函数
//            break;
//        case 3:
//            cacl(mul);//回调函数
//            break;
//        case 4:
//            cacl(div);//回调函数
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

/* qsort example */
//#include <stdio.h>      /* printf */
//#include <stdlib.h>     /* qsort */
//
//int values[] = { 40, 10, 100, 90, 20, 25 };
//
//int compare(const void* a, const void* b)
//{
//    return (*(int*)a - *(int*)b);
//}
//
//int main()
//{
//    int n;
//    qsort(values, 6, sizeof(int), compare);
//    for (n = 0; n < 6; n++)
//        printf("%d ", values[n]);
//    return 0;
//}

//#include <stdio.h>
//typedef struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//}Stu;
////利用简化typedef结构体名称
//int main()
//{
//	Stu s = { "zhangsan",18,85.5f };
//	Stu* ps = &s;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%f\n", ps->score);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//typedef struct Stu
//{
//	char name[20];
//	int age;
//}Stu;
////利用简化typedef结构体名称
//
////假设按照年龄来比较
//int cmp_stu_by_age(const void* p1, const void* p2)
//{
//	return ((Stu*)(p1))->age - ((Stu*)(p2))->age;
//	//对于void类型的指针，无法直接解引用，需要强转成结构体指针，然后进行访问
//}
////按照年龄来排序
//void test1()
//{
//	Stu s[] = { {"zhangsan",18},{"lisi",20},{"wangwu",22} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", s[i].age);
//	}
//}
////假设按照名字来比较
//int cmp_stu_by_name(const void* p1, const void* p2)
//{
//	return strcmp(((Stu*)(p1))->name,((Stu*)(p2))->name);
//}
////按照名字来排序
//void test2()
//{
//	Stu s[] = { {"zhangsan",18},{"lisi",20},{"wangwu",22} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s ", s[i].name);
//	}
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//模拟实现qsort函数
#include <stdio.h>
int cmp_int(const void* p1, const void* p2)
{
	return (*((int*)p1) - (*(int*)p2));
}
void swap(void* p1, void* p2,size_t size)
{
	//进入swap函数后，不管实参是什么类型，形参都会被转化为void类型，因此需要再次强转
	for (int i = 0; i < size; i++)
	{
		char tmp = *((char*)p1+i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}
void bubble(void* base, int count, size_t size,int(*cmp)(const void*p1,const void* p2))
{
	//声明了base count size cmp，而(p1,p2)并未声明
	//根据冒泡排序思想进行比较
	for (int i = 0; i < count - 1; i++)
	{
		for (int j = 0; j < count - 1 - i; j++)
		{
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
			{
				//强转为char*类型后，跳过j*size个字节，访问的就是第j个元素
				swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
			}
		}
	}
}
int main()
{
	int arr[] = { 23,4,6,43,76,87,20,17,25 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, sz, sizeof(int), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}