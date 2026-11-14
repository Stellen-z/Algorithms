#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	string s1,s2;
	
	cin >> n >> s1 >> s2;
	
	int index1 = 0,index2 = 0;
	int ret = 1e6;
	
	for(int i = 1;i <= n;i++)
	{
		string s;cin >> s;
		if(s == s1) index1 = i;
		if(s == s2)	index2 = i;
		
		if(index1 != 0 && index2 != 0)
		{
			// 更新最小距离
			ret = min(abs(index1 - index2),ret);
		}
	}
	
	if(ret == 1e6) cout << -1 << endl;
	else cout << ret << endl;
	
	
	return 0;
}
