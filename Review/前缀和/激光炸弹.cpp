#include <iostream>

using namespace std;
typedef long long LL;

const int N = 5e3 + 10;

LL f[N][N];


int main()
{
	int n,m;cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		int x,y,v;cin >> x >> y >> v;
		++x,++y;
		f[x][y] += v;
	}
	
	
	n = 5001;
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			f[i][j] = f[i-1][j] + f[i][j-1] - f[i-1][j-1] + f[i][j];
		}
	}
	
	// 枚举
	LL ret = 0;
	for(int x1 = 1;x1 + m - 1 <= n;x1++)
	{
		for(int y1 = 1;y1 + m - 1 <= n;y1++)
		{
			int x2 = x1 + m - 1,y2 = y1 + m - 1;
			// if(x2 > n || y2 > n) continue;
			LL ans = f[x2][y2] - f[x1-1][y2] - f[x2][y1-1] + f[x1-1][y1-1];
			ret = max(ans,ret);
		}
	}
	
	cout << ret << endl;
	
	return 0;
}
