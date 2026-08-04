#include <iostream>

using namespace std;

typedef long long LL;

const int N = 1e5 + 10;

LL f[N];

int main()
{
	int n,m;
	cin >> n >> m;
	
	
	int x,y;
	cin >> x;
	for(int i = 2;i <= m;i++)
	{
		cin >> y;
		
		int left = min(x,y);
		int right = max(x,y);
		
		f[left] += 1;
		f[right] -= 1;
		
		x = y;
		
	}
	
	//恢复数组
	for(int i = 1;i <= n;i++) f[i] = f[i - 1] + f[i];
	
	
	//计算价格
	LL ret = 0;
	for(int i = 1;i <= n - 1;i++)
	{
		LL a,b,c;
		cin >> a >> b >> c;
		
		ret += min(a * f[i],c + b * f[i]);
	}
	
	cout << ret << endl; 
	
	return 0;
}


