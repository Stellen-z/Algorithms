#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <windows.h>
//
//int main(int argc, char* argv[])
//{
//	float x, y, a;
//	for (y = 1.5; y > -1.5; y -= 0.1)
//	{
//		for (x = -1.5; x < 1.5; x += 0.05)
//		{
//			a = x * x + y * y - 1;
//			putchar(a * a * a - x * x * y * y * y <= 0.0 ? '@' : ' ');
//		}
//		system("color 0c");
//		putchar('\n');
//	}
//	printf("刘存\n");
//	printf("永远幸福快乐！\n");
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	//打印二维数组全部元素
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//打印二维数组的地址
//	//结论：二维数组在内存中也是连续存放的，第二行是紧跟第一行之后的，呈直线型，也就解释了为什么初始化能省略行，不能省略列
//	int arr[3][5] = { 0 };
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("arr[%d][%d] = %p \n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}
//变长数组不能初始化；变长数组只是使用变量来代替数组的固定长度，变量大小确定后数组大小不会改变，即程序运行起来后才能确定数组大小
//#include <stdio.h>
//int main()
//{
//	int n = 5;
//	int arr[n];
//
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 5;i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[n]);
//		}
//	}
//
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	//welcome to world!!!!!!
//	//######################
//	char arr1[] = {"welcome to world!!!!!!"};
//	char arr2[] = {"######################"};
//
//	int left = 0;
//	int right = strlen(arr1) - 1;  //strlen(arr1)计算字符串arr1的字符个数；在数组中，总字符-1即为数组下标的最大值
//	//int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];     //把arr1中left放进arr2中的left
//		arr2[right] = arr1[right];   //同理 把arr1中right放进arr2中的right
//		printf("%s\n", arr2);        //只需把arr2中#进行替换，故只需打印arr2
//		left++;
//		right--;
//	}
//
//
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <time.h>
//#include <stdlib.h>
//
//int main()
//{
//	//welcome to world!!!!!!
//	//######################
//	char arr1[] = { "welcome to world!!!!!!" };
//	char arr2[] = { "######################" };
//
//	int left = 0;
//	int right = strlen(arr1) - 1;  //strlen(arr1)计算字符串arr1的字符个数；在数组中，总字符-1即为数组下标的最大值
//	//int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];     //把arr1中left放进arr2中的left
//		arr2[right] = arr1[right];   //同理 把arr1中right放进arr2中的right
//		printf("%s\n", arr2);       //只需把arr2中#进行替换，故只需打印arr2
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//
//	return 0;
//}
