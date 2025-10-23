#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//    //打印num除3后的结果
//
//	if (num % 3 == 0)
//		printf("余数为0");
//	else if (num % 3 == 1)
//		printf("余数为1");
//	else
//		printf("余数为2");
//
//	return 0;
//}
//    case决定分支的入口，break决定分支的出口。
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	switch (num % 3)  //表达式只能用整形，不能用浮点型(字符也可以，字符存的时候用的是ASICI码值）
//	{
//	case 0:
//		printf("余数为0\n");
//		break;
//	case 1:
//		printf("余数为1\n");
//		break;
//	case 2:
//		printf("余数为3\n");
//		break;
//
//
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//	}
//	return 0;
//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("工作日");
//		break;
//	default:
//		printf("输入错误");
//
//	}
//	return 0;
//}
//打印1~10
//#include <stdio.h>
//int main()
//{
//	int num = 1;//循环变量的初始化
//
//	while (num <= 10)//循环变量结束的判断
//	{
//		printf("%d", num);
//		num++;循环变量的调整
//	}
//
//	return 0;
//}
//输入一个正的整数，逆序打印这个整数的每一位。
//#include <stdio.h>
//int  main()
//{
//	int num = 0;//
//	scanf("%d", &num);
//
//	while (num)
//	{
//		printf("%d", num % 10);
//		//num = num / 10;
//		num /= 10;
//
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		printf("%d", num % 10);
//		num /=10;
//	}
//
//	return 0;
//}
// for(表达式1;表达式2;表达式3)
//在for循环中表达式1只会被执行一次
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//
//	for (num = 1; num <= 10; num++)
//		printf("%d ", num);
//
//	return 0;
//}
// a+=3 表示a=a+3 
//计算1—100之间3的倍数的数字之和
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int sum = 0;
//
//	//先打印1-100
//	for (num = 1; num <= 100; num++)
//	{
//		if (num % 3 == 0)
//			sum += num;//sum=sum+num;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//计算1—100之间3的倍数的数字之和
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int sum = 0;
//
//	for (num = 1; num <= 100; num++) //循环100次
//	{
//		if (num % 3 == 0)
//			sum = num + sum;         //循环100次
//	}
//	return 0;
//}
// 更优解法:
//计算1—100之间3的倍数的数字之和
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int sum = 0;
//
//	for (num = 3; num <= 100; num += 3)//循环33次
//	{
//		sum += num;                    //循环33次
//	}
//	printf("%d", sum);
//
//	return 0;
//}
//解决问题的方法即为算法
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}
//输入一个正整数，计算这个整数是几位数  (do-while)
//#include <stdio.h>    //0-9 10-99
//int main()
//{
//	int i = 0;
//	int cnt = 0;
//	scanf("%d", &i);
//
//	do 
//	{
//		i = i / 10;
//		cnt++;
//	} while (i);//若写成i=0，即为将i赋值为0，则程序只会执行一次，无论如何结果均为1
//	printf("%d", cnt);//while(i)是判断i是否非 0（用于控制循环次数），而while(i=0)是把i赋值为 0 后判断（结果恒为假）
//
//	return 0;
//}
//break是永久性停止循环；
//continue是跳过本次循环中continue后面的代码