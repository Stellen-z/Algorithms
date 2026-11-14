#include <iostream>

using namespace std;
typedef long long LL;

const int N = 1e7 + 10;

LL a[N];

int main()
{ 
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,x;cin >> n >> x;
	for(int i = 1;i <= n;i++) cin >> a[i];
	
	LL sum = 0;
	
	int l = 1,r = 1;
	int begin = 0,end = 0;
	int len = 1e8;
	
	while(r <= n)
	{
		sum += a[r];
		
		while(sum >= x)
		{
			// 更新结果
			if(r - l + 1 < len)
			{
				begin = l;
				end = r;
				len = r - l + 1;
			}
			sum -= a[l++];
		}
		r++;
	}
	
	cout << begin << " " << end << endl;
	return 0;
}
