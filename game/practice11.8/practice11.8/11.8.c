#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 13;
//	//           a = 00001101
//	//1 << (5 - 1) = 00010000
//	//               00011101
//	a = a | (1 << (5 - 1));
//
//	printf("%d\n", a);
//	// a = 00011101
////         11101111
//	// &   00001101
//	a &= ~(1 << (5 - 1));
//	printf("%d\n", a);
//	return 0;
//}
//struct student
//{
//	char name[20];
//	int age;
//	float score;
//	char id[10];
//
//}s6,s7,s8; //全局变量
//
//struct student s4; //全局变量
//int main()
//{
//	struct student s1 = {"zhangsan",20,87.7f,"2025250721"};
//	struct student s2;
//	struct student s3;//局部变量
//
//
//	return 0;
//}
//struct Peo
//{
//	char name[10];
//	int age;
//	char id[12];//[12]代表能存11个字符，对应11位电话号码
//};
//struct Ebook
//{
//	//data 是一个 「结构体数组」，它的元素类型是 struct Peo，数组长度是 100。
//	struct Peo data[100]; //可以存放100个人的信息 
//	int	count;
//};
//int main()
//{
//	struct Peo p1 = { "zhangsan",23,"2025250721" };
//	struct Ebook eb = { {"lisi",18,"2025250722"},0 };
//
//	/*printf("%s\n", p1.name);
//	printf("%d\n", p1.age);
//	printf("%s\n", p1.id);*/
//
//	printf("%d\n", eb.data[0].age);
//	printf("%s\n", eb.data[0].id);
//	printf("%s\n", eb.data[0].name);
//
//	//.:结构成员操作符
//	return 0;
//}
int main()
{
	//char 类型存放字符的范围为 -128~127  、
	//显然程序无法打印出140，也不可能打印出140
	//char类型为1一个Byte即8个比特位
	char a = 20; 
	//20默认为int类型 即00000000000000000000000000010100
	//截断后存储到a中      
	//00010100   - a   补码
	char b = 120;
	//00000000000000000000000001111000
	//同理 截断后存储到b中
	//01111000   - b   补码
	char c = a + b;
	//00010100  - a
	//整型提升 有符号变量的按照符号位提升 默认为有符号 无符号是（unsigned char)
	//00000000000000000000000000010100  - a
	//01111000  - b
	//同理整型提升
	//00000000000000000000000001111000  - b

	//00000000000000000000000000010100  - a  补码
	//00000000000000000000000001111000  - b  补码
	//a + b
	//00000000000000000000000010001100       补码
	//得到 c = 10001100

	printf("%d", c); //"%d"打印的是十进制（二进制原码转化为十进制）的整数 
	//将c进行整型提升
	//11111111111111111111111110001100   - c 补码
	//10000000000000000000000001110100   - c 原码
	return 0;
}