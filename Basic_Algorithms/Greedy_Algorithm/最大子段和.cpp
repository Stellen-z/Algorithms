#include <iostream>
#include <vector>

typedef long long LL;

using namespace std;

int n;

int main()
{
	cin >> n;
	vector<int> v(n + 1);
	
	for (int i = 1; i <= n; i++) cin >> v[i];
	
	LL ret = -2e9;
	LL sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += v[i];
		ret = max(ret,sum);
		if(sum < 0) sum = 0;
	}
	
	cout << ret << endl;
	
	return 0;
}
