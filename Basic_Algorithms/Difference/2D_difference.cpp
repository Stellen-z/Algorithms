#include <iostream>

using namespace std;

typedef long long LL;

const int N = 1010;

LL f[N][N];

void difference(int x1,int y1,int x2,int y2,int k)
{
	f[x1][y1] += k;
	f[x1][y2+1] -= k;
	f[x2+1][y1] -= k;
	f[x2+1][y2+1] += k;
}

int main()
{
	int n,m,q;
	cin >> n >> m >> q;
	
	//预处理
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= m;j++)
		{
			int x;cin >> x;
			
			difference(i,j,i,j,x);
		}
	}
	
	while(q--)
	{
		int x1,y1,x2,y2,k;
		cin >> x1 >> y1 >> x2 >> y2 >> k;
		
		difference(x1,y1,x2,y2,k);
	}
	
	//前缀和恢复
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= m;j++)
		{
			f[i][j] = f[i-1][j] + f[i][j-1] - f[i-1][j-1] + f[i][j];
			cout << f[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	
	
	return 0;
}
