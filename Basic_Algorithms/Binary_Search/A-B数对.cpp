#include <iostream>
#include <vector>
#include <algorithm>

typedef long long LL;

using namespace std;

int n;
LL c;

int main()
{
	cin >> n >> c;
	vector<int> v(n+1);
	
	//读取+排序
	for(int i = 1;i <= n;i++) cin >> v[i];
	sort(v.begin() + 1,v.end());
	
	LL cnt = 0;
	for(int i = 1;i <= n;i++)
	{
		//a = b + c
		LL b = v[i];
		LL a = b + c;
		//左端点
		int left = 1,right = n;
		while(left < right)
		{
			int mid = (left + right) / 2;
			if(v[mid] >= a) right = mid;
			else left = mid + 1;
		}
		int ret_left = left;
		if(v[ret_left] < a) continue;
		
		
		//右端点
		left = 1,right = n;
		while(left < right)
		{
			int mid = (left + right + 1) / 2;
			if(v[mid] <= a) left = mid;
			else right = mid - 1;
		}
		int ret_right = left;
		
		cnt += ret_right - ret_left + 1;
	}
	
	cout << cnt << endl;
	return 0;
}
