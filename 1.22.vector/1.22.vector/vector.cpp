#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int N = 10;

struct Node
{
	int a, b;
	string s;
};
int main()
{
	//1.创建 vector 
	vector<int> a1;
	//创建一个名字为 a1 的空的可变长数组，每个元素均为int类型数据
	vector<int> a2(N);
	//创建一个大小为10的可变长数组，每个元素的值默认均为0
	vector<int> a2(N, 2);
	//创建一个大小为10的可变长数组,且将每个元素均置为2
	vector<int> a4 = { 1,2,3,4,5 };
	//初始化列表的创建方式

	// <> 里面可以存放任意的数据类型，甚至是STL本身

	vector<string> a5;
	//存放字符串
	vector<Node> a6;
	//存放结构体类型
	vector<vector<int>> a7;
	//创建一个二维的可变长数组
	vector<int> a8[N];
	//创建一个大小为N的数组，里面放着N个可变长数组		
  	return 0;
}