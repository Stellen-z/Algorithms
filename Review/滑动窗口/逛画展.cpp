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
	
	while(r <= n)
	{
		mp[a[r]]++;
		
		if(mp.size() >= m)
		{
			cout << l << " " << r << endl;
			break;
		}
		
		r++;
	}
	
	return 0;
}
