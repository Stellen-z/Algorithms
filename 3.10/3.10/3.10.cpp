#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <unordered_map>
using namespace std;

const int N = 1e6 + 10;
int a[N];
int n, m;

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];

	unordered_map<int, int> mp;
	int left = 1, right = 1;
	int best_len = 1e9;
	int best_l = 1;
	int best_r = n;

	while (right <= n)
	{
		mp[a[right]]++;

		while (mp.size() == m)
		{
			//判断是否需要更新区间 
			int len = right - left + 1;
			if (len < best_len)
			{
				//进行更新
				best_len = len;
				best_l = left;
				best_r = right;
			}
			//左指针右移
			mp[a[left]]--;
			if (mp[a[left]] == 0) mp.erase(a[left]);
			left++;
		}
		right++;
	}
	cout << best_l << " " << best_r << endl;
	return 0;
}
