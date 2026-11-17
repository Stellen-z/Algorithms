#include <iostream>

using namespace std;

const int N = 1e5 + 10;

int n;
int a[N];

void binary_search(int x,int y)
{
	// 左端点  >= x
	int l = 1,r = n;
	while(l < r)
	{
		int mid = (l + r) / 2;
		if(a[mid] >= x) r = mid;
		else l = mid + 1;
	}
	int ret_l = l;
	
	// 右端点
	l = 1,r = n;
	while(l < r)
	{
		int mid = (l + r + 1) / 2;
		if(a[mid] <= y) l = mid;
		else r = mid - 1;
	}
	int ret_r = r;
	
	if(a[ret_l] > y || a[ret_r] < x) cout << 0 << endl;
	else cout << ret_r - ret_l + 1 << endl;
}


int main()
{
	cin >> n;
	for(int i = 1;i <= n;i++) cin >> a[i];
	
	int q;cin >> q;
	while(q--)
	{
		int x,y;cin >> x >> y;
		
		binary_search(x,y);
	}
	
	return 0;
}
