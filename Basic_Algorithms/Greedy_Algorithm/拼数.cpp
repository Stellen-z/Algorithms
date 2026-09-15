#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
typedef long long LL;

bool cmp(string& a,string& b)
{
	return a + b > b + a; 
}

int main()
{
	int n;cin >> n;
	
	vector<string> v(n);
	for(int i = 0;i < n;i++)
	{
		LL x;cin >> x;
		v[i] = to_string(x);
	}
	
	sort(v.begin(),v.end(),cmp);
	
	string ret;
	for(auto& e : v)
	{
		ret += e;
	}
	
	cout << ret << endl;
	
	return 0;
}
