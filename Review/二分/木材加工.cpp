#include <iostream>

using namespace std;
typedef long long LL;

const int N = 1e5 + 10;

int n,k;
int a[N];

bool Check(int len)
{
	// 判断当前长度是否满足要求
	int cnt = 0;
	for(int i = 1;i <= n;i++)
	{
		if(a[i] > len) 
			cnt += a[i] / len;
	}
	
	return cnt >= k;
}

int main()
{	
	cin >> n >> k;
	
	int ans = 1e9;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
		ans = max(a[i],ans); //找最大的长度！
	}
	
	// 枚举1~ans
	// <= 
	int l = 0,r = ans;
	while(l < r)
	{
		LL mid = (l + r + 1) / 2;
		if(Check(mid)) l = mid;
		else r = mid - 1;
	}
	
	
	cout << l << endl;
	
	return 0;
}
