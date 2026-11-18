#include <iostream>
#include <algorithm>

using namespace std;
typedef long long LL;

const int N = 2e5 + 10;

LL v[N];

int main()
{
	int n;LL c;
	cin >> n >> c;
	
	for(int i = 1;i <= n;i++) cin >> v[i];
	sort(v+1,v+n+1);
	
	// 枚举 A = B + C
	LL cnt = 0;
	for(int i = 1;i <= n;i++)
	{
		LL b = v[i];
		LL a = b + c;

		LL l = i,r = n;
		
		// 左端点
		while(l < r)
		{
			LL mid = (l + r) / 2;
			if(v[mid] >= a) r = mid;
			else l = mid + 1;
		}
		if(v[l] != a) continue;
		LL ret_l = l;
		
		// 右端点
		l = i,r = n;
		while(l < r)
		{
			LL mid = (l + r + 1) / 2;
			if(v[mid] <= a) l = mid;
			else r = mid - 1;
		}
		LL ret_r = r;
		
		cnt += ret_r - ret_l + 1;
	}
	
	cout << cnt << endl;
	
	return 0;
}
