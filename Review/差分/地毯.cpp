#include <iostream>

using namespace std;

const int N = 1010;

int f[N][N];

void diff(int x1,int y1,int x2,int y2,int k)
{
	f[x1][y1] += k;
	f[x1][y2+1] -= k;
	f[x2+1][y1] -= k;
	f[x2+1][y2+1] += k;
}


int main()
{
	int n,m;cin >> n >> m;
	
	while(m--)
	{
		int x1,y1,x2,y2;
		cin >> x1 >> y1 >> x2 >> y2;
		
		diff(x1,y1,x2,y2,1);
	}
	
	// 前缀和恢复
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			f[i][j] = f[i][j-1] + f[i-1][j] - f[i-1][j-1] + f[i][j];
			cout << f[i][j] << " ";
		}
		cout << endl;
	}
	
	
	return 0;
}
