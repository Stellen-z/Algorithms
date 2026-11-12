#include <iostream>
#include <unordered_map>

using namespace std;

const int N = 1e6 + 10;
int a[N];

int main()
{
	int n,m;cin >> n >> m;
	cin >> n >> m;
	
	for(int i = 1;i <= n;i++) cin >> a[i];
	
	unordered_map<int,int> mp;
	int l = 1,r = 1;
	int ret= 1e5;
	int ret_l = 1e4,ret_r = 1e4;
	
	while(r <= n)
	{
		mp[a[r]]++;
		
		if(mp.size() == m)
		{
			if(r - l + 1 < ret)
			{
				ret = r - l + 1;
				ret_l = min(ret_l,l);
				ret_r = min(ret_r,r);
			}
			l++;
		}
		r++;
	}
	
	cout << ret_l << " " << ret_r << endl;
	
	
	return 0;
}
