#include <iostream>
#include <vector>
#include <algorithm>

using LL = long long;
using namespace std;

int main()
{
	int n;cin >> n;
	vector<pair<LL,LL>> v(n);
	
	for(int i = 0;i < n;i++) cin >> v[i].first >> v[i].second;
	
	sort(v.begin(),v.end(),[](pair<LL,LL>& p1,pair<LL,LL>& p2){
		return p1.first + p1.second < p2.first + p2.second;
	});
	
	LL ret = -1e18,sum = 0;
	for(auto& e : v)
	{
		ret = max(ret,sum - e.second);
		sum += e.first;
	}
	
	cout << ret << endl;
	return 0;
}
