#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{
	int w,n;
	cin >> w >> n;
	
	vector<int> v;
	
	while(n--)
	{
		int x;cin >> x;
		v.push_back(x);
	}
	
	
	sort(v.begin(),v.end());
	
	int left = 0,right = v.size() - 1;
	
	int cnt = 0;
	
	while(left <= right)
	{
		if(v[left] + v[right] <= w)	
		{
			++left;
			--right;
		}
		else --right;
		++cnt;
	}
	
	cout << cnt << endl;
	
	return 0;
}
