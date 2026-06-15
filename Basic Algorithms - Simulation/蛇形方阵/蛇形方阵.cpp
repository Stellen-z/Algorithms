//蛇形方阵
#include <iostream>

using namespace std;

const int N = 15;

int n;
int a[N][N];


int dx[] = {1,0,-1,0};
int dy[] = {0,-1,0,1};

int main()
{
	cin >> n;
	
	int m = 1;
	for(int i = 0;i < n;i++)
	{
		
		for(int j = 0;j < n;j++)
		{
			int pos = 0;
			while(pos < 4)
			{
				int x = pos + i;
				int y = pos + j;
				pos++;
				
				if(x >= n || x < 0 || y >= n || y < 0) continue;
				a[x][y] = m++;
				
			}
		}
	}
	
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < n;j++)
		{
			printf("%3d",a[i][j]);
		}
		cout << endl;
	}
	
	return 0;
} 

#include <iostream>

using namespace std;

const int N = 15;

int n;
int arr[N][N];


int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

int main()
{
	cin >> n;
	
	int cnt = 1;
	int x = 1,y = 1,pos = 0;
	while(cnt <= n * n)
	{
		arr[x][y] = cnt;
		
		int a = x + dx[pos];
		int b = y + dy[pos];
		
		if(a < 1 || a > n || b < 1 || b > n || arr[a][b]) 
		{
			pos = (pos + 1) % 4;
			a = x + dx[pos];
			b = y + dy[pos];
		}
		x = a;
		y = b;
		cnt++;
	}
	
	
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			printf("%3d",arr[i][j]);
		}
		cout << endl;
	}
	
	return 0;
} 

