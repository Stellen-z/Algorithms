#include <iostream>

using namespace std;

typedef long long LL;

const int N = 1e5 + 10;

LL a[N];

int main()
{
	int n; cin >> n;
	
	LL sum = 0；
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	
	int begin = 1,end = 1;
	LL k = 0;
	LL ret = 0;
	while(end <= n)
	{
		//进窗口
		k += a[end];
		while(2 * k >= sum)
		{
			//更新结果
			ret = max(ret,sum-k);
			
			//出窗口
			k -= a[begin++];
		}
		ret = max(ret,k);
		++end;
		
	}
	
	cout << ret << endl;
	
	return 0;
}
