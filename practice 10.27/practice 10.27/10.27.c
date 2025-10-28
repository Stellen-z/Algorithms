#define _CRT_SECURE_NO_WARNINGS
//复习数组练习一
//#include <stdio.h>
//#include <string.h>
//#include <time.h>
//
//int main()
//{
//	//welcome to world!!!!!
//	//#####################
//
//	char arr1[] = {"welcome to world!!!!!"};
//	char arr2[] = {"#####################"};
//
//	int left = 0;
//	int right = strlen(arr2);
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);//默认单位为ms
//		left++;
//		right--;
//	}
//	printf("%s", arr1);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int n = 0;
//	int i = 0;
//
//	scanf("%d", &n);  //要在arr数组中找到n这个数
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
//
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == n)
//		{
//			printf("下标为%d\n", i);
//			break;
//		}
//		//else
//		//{
//		//	printf("未找到\n");
//		//}                     //这样写意味着在当前这一个循环中，若当前元素不等于 n 便会执行else语句；即打印未找到
//	}                           //且看下面解法
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	int i = 0;
//	int flag = 0;//假设找不到
//
//	scanf("%d", &n);  //要在arr数组中找到n这个数
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
//
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == n)
//		{
//			printf("下标为%d\n", i);
//			flag = 1;     //此时若已经找到了n，则应对flag进行赋值为1，因为初始时假设为0，从而便不会影响循环外面的if语句对flag的判断
//			break;
//		}
//	}
//
//	if (flag == 0)        //if语句的执行逻辑是：当括号内的表达式结果为 “真（非 0）” 时，执行后续代码块。
//	{
//		printf("未找到");
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	//二分查找
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 0;   
	scanf("%d", &n);//要查找的数	
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int found = 0;
	//若有时运行程序后，发现调试台卡顿，多半是代码有问题
	
	while (left <= right)
	{
		//int mid = (left + right) / 2;  //每一次二分查找mid值均在动态变化，因此要将mid放在循环里面
      //更优写法：(防止数据太大，达到上限）
      int mid = left + (right - left) / 2; 
		if (arr[mid] < n)
		{
			left = mid + 1;
		}
		else if (arr[mid] > n)
		{
			right = mid - 1;
		}
		if (arr[mid] == n)
		{
			printf("找到了，下标为%d\n", mid);
			found = 1;       //不要在found前面加上int 这样即为重新给found赋值，逻辑错误
			break;
		}
	}
	if (found == 0)
	{	
		printf("未找到\n");
	}
	
	return 0;
}