#include <iostream>
#include <algorithm>

using namespace std;
typedef long long LL;

const int N = 1e5 + 10;

int a[N];

int main()
{
	int m,n;cin >> m >> n;
	for(int i = 1;i <= m;i++) cin >> a[i];
	
	// 防止影响结果
	a[0] = -1e7; 
	
	sort(a+1,a+1+m);
	
	LL cnt = 0;
	while(n--)
	{
		int l = 1,r = m;
		int x;cin >> x;
		
		// >= x
		while(l < r)
		{
			int mid = (l + r) / 2;
			if(a[mid] >= x) r = mid;
			else l = mid + 1;
		}
		int ret_l = l;
		
		// <= x
		// l = 1,r = m;
		// while(l < r)
		// {
		// 	  int mid = (l + r + 1) / 2;
		//	  if(a[mid] <= x) l = mid;
		//    else r = mid - 1;
		// }
		// int ret_r = l;
		
		cnt += min(abs(a[ret_l] - x),abs(a[ret_l - 1] - x));
	}
	
	cout << cnt << endl;
	
	return 0;
}
