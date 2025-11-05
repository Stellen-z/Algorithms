#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//#include <stdio.h>
//int Fac(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return Fac(n - 1) * n;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
//复习倒着打印这个数的每一位
//#include <stdio.h>
//int Print(int n)
//{
//	while (n)
//	{
//		printf("%d ", n % 10);
//		n /= 10;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Print(n);
//	return 0;
//}
//#include <stdio.h>
//void Print(int n)
//{
//	if (n > 9)
//		Print(n / 10);
//
//	printf("%d", n % 10);
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	Print(n);
//
//	return 0;
//}
//#include <stdio.h>
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int ret = Fib(n);
//	printf("%d\n",ret);
//	return 0;
//}
//#include <stdio.h>
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n >= 3)
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
//	int n;
//	scanf("%d",&n);
//	int ret = Fib(n);
//	printf("%d\n",ret);
//	return 0;
//}
//青蛙跳台阶  汉诺塔问题  使用递归解决

//汉诺塔问题:A B C三个架子，A上面有n个盘子，从上往下盘子尺寸依次减小
//一次只能移动一个盘子，要求将盘子从 A->C 求路径
//#include <stdio.h>
//n为盘子个数
//题解：先将n-1个盘子从 A->C，若首先 A->B 则不符合游戏规则，因为A上面最先移动的是最小盘子，假设移动到B后
//只能移动次小的盘子到C，不符合规则；因此只能A -> C ,接着从C -> 依次递归
//用n = 3来说明：先A->C,然后A->B,接着C->B,A->C,此时最大盘子已被移到C,然后B->A,B->C,A->C
//void Move(char pos1, char pos2)
//{
//	printf(" %c -> %c ", pos1, pos2);
//}
////pos1为起始位置
////pos2为中转位置
////pos3为终点位置
//void Hanio(int n, char pos1, char pos2, char pos3)
//{
//	if (n == 1)
//	{
//		Move(pos1, pos3);
//	}
//	else
//	{
//		Hanio(n - 1, pos1, pos3, pos2);
//		Move(pos1,pos3);
//		Hanio(n - 1, pos2, pos1, pos3);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	Hanio(n, 'A', 'B', 'C');
//	printf("\n");
// return 0;
//}

//青蛙跳台阶
//题解：前两个台阶跳法固定，n=1时就1种，n=2时两种，后面递归均以此为基础
// n为跳的台阶数，此时开始跳则分为跳到n-1或n-2这两个台阶上，若以n-1为基准，则只需Fib（n-1)；同理只需Fib(n-2)
// 之后一直递归直到还剩1个或2个台阶
//当n=3时，第一步跳出一个台阶或两个台阶，以这一步跳过后的台阶为基准，则分别还剩两个和一个台阶
// 即n=2和n=1两种情况，跳法固定，递归完成
//#include <stdio.h>
//int Fib(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int ret = Fib(n);
//		printf("%d", ret);
//	}
//	return 0;
//}