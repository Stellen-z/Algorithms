//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int check_sys()
//{
//	int a = 1;
//	//大端：0x00 00 00 01
//	//小端：0x01 00 00 00
//	return (*(char*)&a);
//}
//int main()
//{
//	//判断当前机器是大端字节序还是小端字节序
//	int r = check_sys();
//	if (r == 1)
//		printf("小端");
//	else
//		printf("大端");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	//-1:
//	//原码：10000000 00000000 00000000 00000001
//	//反码：11111111 11111111 11111111 11111110
//	//补码：11111111 11111111 11111111 11111111
//	//a里面存的是：11111111
//
//
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d %d %d", a, b, c);
//	return 0;
//}