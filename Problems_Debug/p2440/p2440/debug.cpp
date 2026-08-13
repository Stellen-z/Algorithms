//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//typedef long long LL;
//
//using namespace std;
//
//int n, k;
//
//bool check(vector<int>& v, int l)
//{
//	LL sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += v[i] / l;
//	}
//
//	return sum == k;
//}
//
//int main()
//{
//	cin >> n >> k;
//	vector<int> v(n + 1);
//
//	for (int i = 1; i <= n; i++) cin >> v[i];
//
//	sort(v.begin(), v.end());
//
//	int left = 1, right = v[n];
//	while (left < right)
//	{
//		int mid = (left + right + 1) / 2;
//		if (check(v, mid)) left = mid;
//		else right = mid - 1;
//	}
//
//	cout << left << endl;
//
//	return 0;
//}


//1.check() >= k,并不是刚好切k段，>= k即可
//2.left = 0,不够切直接返回0


#include <iostream>
#include <vector>
#include <algorithm>

typedef long long LL;

using namespace std;

int n, k;

LL check(vector<int>& v, LL l)
{
	LL sum = 0;
	for (auto& e : v)
	{
		sum += e / l;
	}

	return sum;
}

int main()
{
	cin >> n >> k;
	vector<int> v(n + 1);

	for (int i = 1; i <= n; i++) cin >> v[i];

	sort(v.begin() + 1, v.end());

	//从0开始，不够切时left = 0
	LL left = 0, right = v[n];
	while (left < right)
	{
		LL mid = (left + right + 1) / 2;
		if (check(v, mid) >= k) left = mid;
		else right = mid - 1;
	}

	cout << left << endl;

	return 0;
}