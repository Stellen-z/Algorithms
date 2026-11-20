#include <iostream>

using namespace std;
using LL = long long;

const int N = 1e6 + 10;

int n,m;
int a[N];

bool Check(int h)
{
	LL sum = 0;
	for(int i = 1;i <= n;i++)
	{
		if(a[i] <= h) continue;
		sum += a[i] - h;
	}
	
	return sum >= m;
}

int main()
{
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> a[i];
	
	int l = 1,r = 4e5;
	while(l < r)
	{
		LL mid = (l + r + 1) / 2;
		if(Check(mid)) l = mid;
		else r = mid - 1;
	}
	
	cout << r << endl;
	
	return 0;
}
