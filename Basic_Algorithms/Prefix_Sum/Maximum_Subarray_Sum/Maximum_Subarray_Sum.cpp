//前缀和
#include <iostream>

using namespace std;

typedef long long LL;

const int N = 2e5 + 10;

LL f[N];

int main()
{
	int n;cin >> n;
	for(int i = 1;i <= n;i++) 
	{
		int x;cin >> x;
		f[i] = f[i - 1] + x;
	}
	
	LL ret = -1e18;
	LL prevmin = 0;
	//求f[i] - f[m]最大值，f[i]取max，f[m]取min
	for(int i = 1;i <= n;i++)
	{
		ret = max(ret,f[i] - prevmin);
		prevmin = min(f[i],prevmin);
	}
	
	cout << ret << endl;
	
	return 0;
}

//贪心
//#include <iostream>
//
//using namespace std;
//
//typedef long long LL;
//
//const int N = 2e5 + 10;
//
//LL a[N];
//
//int main()
//{
//	int n;cin >> n;
//	for(int i = 1;i <= n;i++) cin >> a[i];
//	
//	LL sum = 0;
//	LL ret = -1e9;
//	for(int i = 1;i <= n;i++)
//	{
//		sum += a[i];
//		ret = max(ret,sum);
//		if(sum < 0) sum = 0;
//	}
//	
//	cout << ret << endl;
//	
//	return 0;
//}




