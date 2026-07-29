#include <iostream>

using namespace std;

typedef long long LL;

const int N = 1e5 + 10;

LL a[N],f[N];


int main()
{
	int n,m;
	cin >> n >> m;
	
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
		f[i] = f[i-1] + a[i];
	}
	
	while(m--)
	{
		int l,r;
		cin >> l >> r;
		
		cout << f[r] - f[l-1] << endl;
	}
	return 0;
}
