#include <iostream>

using namespace std;
typedef long long LL;

const int N = 1e5 + 10;

LL f[N]; // 每段地铁乘坐次数

int main()
{
	int n,m;cin >> n >> m;
	
	int l,r;cin >> l;
	for(int i = 2;i <= m;i++)
	{
		cin >> r;
		
		// 不能直接改l,r 改了之后r就是大端点，赋值给l之后就会影响下一次的区间判断
		int left = min(l,r);
		int right = max(l,r);
		
		f[left] += 1;
		f[right] -= 1; // [l,r] 表示的是[l,r-1]段地铁
		
		l = r;
	}

	// 前缀和恢复
	for(int i = 1;i <= n;i++) f[i] = f[i-1] + f[i];

	LL ret = 0;
	
	// 输入 n-1 次!!
	for(int i = 1;i <= n - 1;i++)
	{
		int a,b,c;cin >> a >> b >> c;
		ret += min(a * f[i],c + b * f[i]);
	}
	
	cout << ret << endl;

	return 0;
}

