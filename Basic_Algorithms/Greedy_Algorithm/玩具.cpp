#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long LL;

int main()
{
	int n;cin >> n;
	vector<int> v(2 * n);
	
	for(int i = 0;i < 2 * n;i++) cin >> v[i];
	
	sort(v.begin(),v.end());
	
	LL ret = 0;
	int begin = 0,end = v.size() - 1;
	while(begin < end)
	{
		ret += (LL)v[begin++] * v[end--];
	}
	
	cout << ret << endl;
	
	return 0;
}
