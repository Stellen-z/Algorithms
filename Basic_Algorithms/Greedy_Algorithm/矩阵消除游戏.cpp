#include <iostream>
#include <vector>
#include <algorithm>

typedef long long LL;
using namespace std;

int popcount(int x)
{
	int ret = 0;
	while(x)
	{
		x &= x - 1;
		ret++;
	}
	return ret;
}

int main()
{
	int n,m,k;
	cin >> n >> m >> k;
	
	vector<vector<int>> v(n,vector<int>(m));
	for(int i = 0;i < n;i++)
		for(int j = 0;j < m;j++)
			cin >> v[i][j];
	
	LL ret = 0;
	
	//枚举选取的行
	for(int st = 0;st < (1 << n);st++)
	{
		int cnt = popcount(st);
		if(cnt > k) continue;
		
		LL sum = 0;
		
		vector<LL> col(m,0);
		for(int i = 0;i < n;i++)
		{
			for(int j = 0;j < m;j++)
			{
				if((st >> i) & 1) sum += v[i][j]; 
				else col[j] += v[i][j];
			}
		}
		
		sort(col.begin(),col.end(),greater<LL>());
		
		int ans = min(k-cnt,m);
		for(int i = 0;i < ans;i++) sum += col[i];
		
		ret = max(ret,sum);
		
	} 
	
	cout << ret << endl;
	
	return 0;
}
