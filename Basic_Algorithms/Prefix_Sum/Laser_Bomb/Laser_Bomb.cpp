#include <iostream>

using namespace std;

const int N = 5010;

int a[N][N],f[N][N];

int main()
{
	int n,m;cin >> n >> m;
	
	while(n--)
	{
		int x,y,v;
		cin >> x >> y >> v;
		++x,++y;
	
		a[x][y] += v;
	}
	
	n = 5001;
	//预处理
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			f[i][j] = f[i][j-1] + f[i-1][j] - f[i-1][j-1] + a[i][j]; 
		}
	}
	
	
	int ret = 0;
	if(m > n)
	{
		ret = f[n][n];
	}
	else
	{
		for(int x2 = m;x2 <= n;x2++)
		{
			for(int y2 = m;y2 <= n;y2++)
			{
				int x1 = x2 + 1- m;
				int y1 = y2 + 1 - m;
				
				int val = f[x2][y2] - f[x1-1][y2] - f[x2][y1-1] + f[x1-1][y1-1]; 
				ret = max(ret,val);
				
			}
		}
	}
	
	cout << ret << endl;
	
	return 0;
}
