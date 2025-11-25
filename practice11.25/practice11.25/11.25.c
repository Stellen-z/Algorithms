#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <ctype.h>
//
//int main()
//{
//	//islower 小写字母a-z
//	//isupper 大写字母A-Z
//	//写一个代码，将字符串中小写字母换成大写，其他字符不变
//	char arr[] = { "I am A chinese." };
//	char* pa = arr;
//	while (*pa)  //\0的ASCII码值就是0
//	{
//		if (islower(*pa))
//			//小写字母
//			//第一种：
//			// *(pa) -= 32;
//			//第二种：
//			*(pa) = toupper(*pa);
//			printf("%c", *(pa));
//			pa++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//二维数组的创建
//	//int arr[3][5];
//	//char name[10][10];
//	//二维数组的初始化
//	//int arr[2][2] = { 1,2,3,4 }; //完全初始化
//	int arr[2][2] = { 1,2 };     //不完全初始化
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	//printf("%d\n", arr[0][0]);//1
//	//printf("%d\n", arr[2][4]);//7
//	//数组的输入与输出
//	int i = 0;
//	for (i = 0; i < 3; i++)            //遍历行
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)        //遍历列
//		{
//			scanf("%d", &arr[i][j]);   //输入数据
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{                                  //遍历行
//		int j = 0;
//		for (j = 0; j < 5; j++)        //遍历列
//		{
//			printf("%d ", arr[i][j]); //打印数据
//		}printf("\n");
//	}
//
//	return 0;
//}

//数组练习：多个字符从两端移动，向中间汇聚
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = { "welcome to world" };
//	char arr2[] = { "****************" };
//
//	int left = 0;                 //数组起始下标
//	int right = strlen(arr1) - 1; //数组末尾下标
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];  
//		arr2[right] = arr1[right];//将arr1两端赋给arr2两端
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//	return 0;
//}

//数组练习：二分查找
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]); //元素个数
//	int left = 0;                          //起始下标
//	int right = sz - 1;                    //末尾下标
//	int mid = 0;                           //中间元素下标
//	int key = 7;                           //要找的元素  
//	int flag = 0;//假设没找到
//	while (left <= right)
//	{
//		mid = (right + left) / 2;         
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			flag = 1;//找到了
//			break;
//		}
//	}
//	if (flag == 1)
//		printf("找到了，下标为%d\n", mid);
//	else
//		printf("没找到\n");
//	return 0;
//}

//使用指针打印数组内容
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//	return 0;
//}

//实现一个对整形数组的冒泡排序
#include <stdio.h>
void bubble_sort(int arr[], int sz)
{
	//确定趟数
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		//每趟依次比较，找出逆序对
		int j = 0;
		int flag = 0;//假设没有逆序对
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 1; //进行了交换，有逆序对
			}
		}
		if (flag == 0)
			//前面已经排好的+没有逆序对，说明这一组已经排好了，直接结束循环即可
			break;
	}
}
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = { 2,5,7,8,10,3,9,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	print_arr(arr, sz);
	return 0;
}