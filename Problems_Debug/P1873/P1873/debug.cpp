#include <iostream>
#include <vector>
#include <algorithm>

typedef long long LL;

using namespace std;

LL n, m;

LL check(vector<LL>& v, LL mid)
{
	LL sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (v[i] > mid) sum += v[i] - mid;
	}

	return sum;
}

int main()
{
	cin >> n >> m;
	vector<LL> v(n + 1);

	for (int i = 1; i <= n; i++) cin >> v[i];

	sort(v.begin() + 1, v.end());

	LL left = 1, right = v.back();
	while (left < right)
	{
		LL mid = (left + right + 1) / 2;
		if (check(v, mid)) left = mid;
		else right = mid - 1;
	}

	cout << left << endl;
	return 0;
}

//没有判断！！！
//if (check(v, mid)) left = mid;