#include <iostream>
#include <vector>

typedef long long LL;

using namespace std;

int n;

LL binary_search(vector<LL>& v,int x,int y)
{
	//1.左端点
	int left = 0,right = n - 1;
	while(left < right)
	{
		int mid = (left + right) / 2;
		if(v[mid] >= x) right = mid;
		else left = mid + 1;
	}
	int ret_left = left;
	if(v[ret_left] < x) return 0;
	
	//2.右端点
	left = 0,right = n - 1;	
	while(left < right)
	{
		LL mid = (left + right + 1) / 2;
		if(v[mid] <= y) left = mid;
		else right = mid - 1;
	}
	int ret_right = right;
	if(v[ret_right] > y) return 0;
	
	return ret_right - ret_left + 1;
}

int main()
{
	cin >> n;
	vector<LL> v;
	v.resize(n);
	
	for(int i = 0;i < n;i++) cin >> v[i];
	
	int q;cin >> q;
	while(q--)
	{
		LL x,y;cin >> x >> y;
		
		cout << binary_search(v,x,y) << endl;  
	}
	return 0;
}
