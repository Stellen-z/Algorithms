#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long LL;

int n,m;

LL binary_search(vector<int>& v,int x)
{
	int left = 1,right = m;
	//1.>=x
	while(left < right)
	{
		int mid = (left + right) / 2;
		if(v[mid] >= x) right = mid;
		else left = mid + 1;
	}
	int ret_left = left;
	
	//2.<=x
	left = 1,right = m;
	while(left < right)
	{
		int mid = (left + right + 1) / 2;
		if(v[mid] <= x) left = mid;
		else right = mid - 1;
	}
	int ret_right = left;
	
	return min(abs(v[ret_left] - x),abs(v[ret_right] - x));
}

int main()
{
	cin >> m >> n;
	vector<int> a(m+1);
	
	for(int i = 1;i <= m;i++) cin >> a[i];
	
	sort(a.begin(),a.end());
	
	LL ret = 0;
	for(int i = 1;i <= n;i++)
	{
		int x;cin >> x;
		
		ret += binary_search(a,x);
	}
	
	cout << ret << endl;
	
	return 0;
}
