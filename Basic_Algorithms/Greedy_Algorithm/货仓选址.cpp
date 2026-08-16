#include <iostream>
#include <vector>
#include <algorithm>


typedef long long LL;

using namespace std;

int n;

int main() 
{
	cin >> n;
	vector<int> v(n + 1);

	for (int i = 1; i <= n; i++) cin >> v[i];

	sort(v.begin(), v.end());

	LL ret = 0;
//	for (int i = 1; i <= n; i++) 
//	{
//		ret += abs(v[i] - v[n / 2]);
//	} 
	//用结论来求
	for (int i = 1; i <= n / 2; i++) 
	{
		ret += abs(v[i] - v[n + 1 - i]); 	
	}

	cout << ret << endl;


	return 0;
}
