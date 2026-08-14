#include <iostream>
#include <vector>

typedef long long LL;

using namespace std;

LL l;
int n,m;

LL check(vector<int>& v,int x)
{
	int cnt = 0;
	int last = 0;
	
	for (int i = 1; i <= n + 1; i++)
	{
		if (v[i] - v[last] < x)
			cnt++;
		else
			last = i;
	}
	
	return cnt;
}


int main()
{
	cin >> l >> n >> m;
	
	vector<int> v(n+2);
	
	for(int i = 1;i <= n;i++) cin >> v[i];
	//添加终点
	v[n + 1] = l;
	
	
	int left = 1,right = l;
	while(left < right)
	{
		LL mid = (left + right + 1) / 2;
		if(check(v,mid) <= m) left = mid;
		else right = mid - 1;
	}
	
	cout << left << endl;
	
	return 0;
}
