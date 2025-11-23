#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    //while(scanf("%d",&input) != EOF)
//    while (~scanf("%d", &n))
//    {
//        char arr[20][20];
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                //主对角线 从左上到右下
//                if (i == j)
//                {
//                    arr[i][j] = '*';
//                }
//                //反对角线 从右上到左下
//                else if ((i + j) == (n - 1))
//                {
//                    arr[i][j] = '*';
//                }
//                else
//                    arr[i][j] = ' ';
//                //打印每一行中每个二维数组中的元素
//                printf("%c", arr[i][j]);
//            }printf("\n");
//        }
//    }
//
//
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int n;
//    char arr[20][20];
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                //首行和尾行
//                if ((i == 0) || (i == n-1))
//                {
//                    arr[i][j] = '*';
//                }
//                else if ((j == 0) || (j == n - 1))
//                {
//                    arr[i][j] = '*';
//                }
//                else
//                {
//                    arr[i][j] = ' ';
//                }
//                printf("%c ", arr[i][j]);
//            }printf("\n");
//        }
//    }
 /*   return 0;
}*/

//#include <stdio.h>
//int main()
//{
//    int m, n;
//    int arr[10][10] = { 0 };
//    while (scanf("%d %d", &m, &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < m; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                scanf("%d ", &arr[i][j]);
//            }
//        }
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int j = 0;
//    for (j = 0; j < sz; j++)
//    {
//        scanf("%d ", &arr[j]);
//    }
//    int i = 0;
//    for (i = sz-1; i >= 0; i--)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n, m;
//    while (scanf("%d %d", &n, &m) != -1)
//    {
//        //完成输入要求
//        int i;
//        int j;
//        int arr1[1000] = { 0 };
//        for (i = 0; i < n; i++)
//        {
//            scanf("%d ", &arr1[i]);
//        }
//        int arr2[1000] = { 0 };
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d ", &arr2[j]);
//        }
//        //合并数组
//        int arr[2000];
//        for (i = 0; i < n; i++)
//        {
//            arr[i] = arr1[i];
//        }
//        for (j = 0; j < m; j++)
//        {
//            arr[i + j] = arr2[j];
//        }
//        //冒泡排序
//        for (i = 0; i < n + m - 1; i++)
//        {
//            for (j = 0; j < n + m - i - 1; j++)
//            {
//                if (arr[j] > arr[j + 1])
//                {
//                    //交换
//                    int temp = arr[j];
//                    arr[j] = arr[j] + 1;
//                    arr[j + 1] = temp;
//                }
//            }
//        }
//        for (i = 0; i < n + m - 1; i++)
//        {
//            printf("%d ", arr[i]);
//        }
//
//    }
//    return 0;
//}

//编写一个程序，从用户输入中读取10个整数并存储在一个数组中。然后，计算并输出这些整数的平均值。
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//存储十个整数
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//计算平均值
//	int sum = 0;
//	for (i = 0; i < sz; i++)
//	{
//		sum += arr[i]/10;
//	}
//	printf("%d", sum);
//	return 0;
//}
//【一维数组】交换数组           
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//int main()
//{
//	int A[5] = { 1,3,5,7,9 };
//	int B[5] = { 2,4,6,8,10 };
//	//交换
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int temp = A[i];
//		A[i] = B[i];
//		B[i] = temp;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", A[i]);
//	}printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", B[i]);
//	}printf("\n");
//	return 0;
//}

//复习二分查找
