#include <iostream>
#include <unordered_map>

using namespace std;
	
const int N = 1e6 + 10;

int a[N];

int main()
{
	int n,m;cin >> n >> m;
	
	for(int i = 1;i <= n;i++) cin >> a[i];
	
	int begin = 1,end = 1;
	int ret = 1e9;
	
	int left = 1,right = n;
	unordered_map<int,int> mp;
	while(end <= n)
	{
		//入窗口
		mp[a[end]]++;
		//判断
		while(mp.size() == m)
		{
			//更新结果
			int now_ret = end - begin + 1;
			if(ret > now_ret)
			{
				ret = now_ret;
				left = begin;
				right = end;
			}
			//出窗口
			mp[a[begin]]--;
			if(mp[a[begin]] == 0) mp.erase(a[begin]);
			begin++;
		}
		++end;
	}
	
	cout << left << " " << right << endl;
	
	return 0;
}
