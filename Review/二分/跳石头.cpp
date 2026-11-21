#include <iostream>

using namespace std;
using LL = long long;

const int N = 5e5 + 10;

int L,n,m;
int a[N];

bool Check(int len)
{
	LL sum = 0;
	for(int i = 0;i <= n;i++)
	{
		int j = i + 1;
		while(j <= n && a[j] - a[i] < len) j++;
		sum += j - i - 1;
		i = j - 1;
	}
	return sum <= m;
}

int main()
{
	
	cin >> L >> n >> m;
	
	for(int i = 1;i <= n;i++) cin >> a[i];
	a[n+1] = L;
	++n;

	// [1,L] <= 
	int l = 1,r = L;
	while(l < r)
	{
		LL mid = (l + r + 1) / 2;
		if(Check(mid)) l = mid;
		else r = mid - 1;
	}
	
	cout << l << endl;
	
	return 0;
}
