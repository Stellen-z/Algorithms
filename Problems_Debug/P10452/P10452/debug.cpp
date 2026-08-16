//求的是极值，而非中位数
//中位数到左右各端点的距离才是最小
// |a - x| + |b - x| >= |a - b|
// x在[a,b]时，取等

//#include <iostream>
//#include <vector>
//
//typedef long long LL;
//
//using namespace std;
//
//int n;
//
//int main()
//{
//	cin >> n;
//	vector<int> v(n + 1);
//
//	int max_val = 0;
//	int min_val = 1e5;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> v[i];
//		max_val = max(max_val, v[i]);
//		min_val = min(min_val, v[i]);
//	}
//
//	int mid = (max_val + min_val) / 2;
//
//	LL sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += abs(mid - v[i]);
//	}
//
//	cout << sum << endl;
//
//
//	return 0;
//}


#include <iostream>
#include <vector>
#include <algorithm>


typedef long long LL;

using namespace std;

int n;

int main()
{
	cin >> n;
	vector<int> v(n + 1);

	for (int i = 1; i <= n; i++) cin >> v[i];

	sort(v.begin(), v.end());

	LL ret = 0;
	//	for (int i = 1; i <= n; i++) 
	//	{
	//		ret += abs(v[i] - v[n / 2]);
	//	} 
		//用结论来求
	for (int i = 1; i <= n / 2; i++)
	{
		ret += abs(v[i] - v[n + 1 - i]);
	}

	cout << ret << endl;


	return 0;
}