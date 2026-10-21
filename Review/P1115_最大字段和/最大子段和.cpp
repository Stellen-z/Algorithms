#include <iostream>

using namespace std;
typedef long long LL;

const int N = 2e5 + 10;
LL f[N];

int main()
{
	int n;cin >> n;
	for(int i = 1;i <= n;i++) 
	{
		int x;cin >> x;
		f[i] = f[i-1] + x;
	}
	
	LL prevmin = 0,ret = -1e15;
	for(int i = 1;i <= n;i++)
	{
		ret = max(f[i]-prevmin,ret);
		prevmin = min(prevmin,f[i]);
	}
	
	cout << ret << endl;
	
	return 0;
}
