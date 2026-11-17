#include <iostream>

using namespace std;
typedef long long LL;

const int N = 1e5 + 10;

int a[N];

int main()
{
	int n;cin >> n;
	
	LL sum = 0;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	
	// 计算每一个小朋友的最远距离
	
	int l = 1,r = 1;
	LL k = 0,ret = 0;
	while(r <= n)
	{
		// 进入窗口
		k += a[r];
		
		while(2 * k >= sum)
		{
			// 不合法
			ret = max(sum - k,ret);
			
			k -= a[l];
			l++;
		}
		
		// 合法
		ret = max(k,ret);
		r++;
	}
	
	cout << ret << endl;
	
	return 0;
}
