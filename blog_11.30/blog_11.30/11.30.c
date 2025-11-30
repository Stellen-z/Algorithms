#define _CRT_SECURE_NO_WARNINGS
//一只青蛙一次可以跳上 1 级台阶，也可以跳上 2 级台阶
//请编写程序，输入台阶总数 n（n ≥ 1），输出青蛙跳上 n 级台阶的不同跳法总数
//#include <stdio.h>
//int Fun(int n)
//{
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 2;
//	else
//		return Fun(n-1) + Fun(n-2);
//}
//#include <stdio.h>
//int Fun(int n)
//{
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fun(n);
//	printf("有%d种跳法\n", r);
//	return 0;
//}
//#include <stdio.h>
//// 全局变量：统计移动步数
//int step = 0;
//// 汉诺塔核心函数：输出移动路径
//void hanoi(int n, char A, char B, char C) {
//    // 终止条件：只有1个圆盘，直接移动
//    if (n == 1) 
//    {
//        printf("第%d步：将圆盘1从%c移到%c\n", ++step, A, C);
//        return;
//    }
//    // 1. 把n-1个圆盘从A移到B（借助C）
//    hanoi(n - 1, A, C, B);
//    // 2. 把第n个圆盘从A移到C
//    printf("第%d步：将圆盘%d从%c移到%c\n", ++step, n, A, C);
//    // 3. 把n-1个圆盘从B移到C（借助A）
//    hanoi(n - 1, B, A, C);
//}
//
//int main() {
//    int n;
//    printf("请输入圆盘数量：");
//    scanf("%d", &n);
//    // 调用汉诺塔函数：源柱A，辅助柱B，目标柱C
//    hanoi(n, 'A', 'B', 'C');
//    printf("总移动步数：%d\n", step);
//    return 0;
//}

//#include <stdio.h>
//1.
//int My_strlen(char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//2.
//int My_strlen(char* str)
//{
//	char* ps = str;
//	while (*str)
//	{
//		str++;
//	}//此时已经访问到最后一个字符
//	return str - ps;
//}
//3.
//#include <assert.h>
//size_t My_strlen(const char* str)
//{
//	assert(str);
//	if (*str != '\0')
//	{
//		return 1 + My_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	//模拟实现strlen函数
//	//1.计数器
//	//2.指针-指针
//	//3.递归
//	//int r = My_strlen(arr);
//	size_t r = My_strlen(arr);
//	//printf("%d\n", r);
//	printf("%zu\n", r);
//	return 0;
//}
//模拟实现strcpy
//void My_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}
//进行优化
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//char* My_strcpy(char* dest,const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//strcpy函数
//	//string copy
//	char arr1[] = "Hello World";
//	char arr2[20] = { 0 };
//	char* r = My_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", r);
//	//char* ps = strcpy(arr2, arr1);
//	//printf("%s\n", arr2);
//	//printf("%s\n", ps);
//	return 0;
//}

//strcat函数:字符串追加
#include <stdio.h>
#include <string.h>
char* My_strcat(char* dest, const char* src)
{
	char* ret = dest;
	//1.找到dest中的\0
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "Hello";
	char arr2[] = "World"; 

	char* r = My_strcat(arr1, arr2);
	printf("%s\n", arr1);
	printf("%s\n", r);
	return 0;
}