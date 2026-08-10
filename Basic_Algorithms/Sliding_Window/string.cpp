#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

const int N = 1e6 + 10;

int main()
{
	string s; cin >> s;
	
	size_t begin = 0,end = 0;
	
	unordered_map<char,int> mp;
	size_t len = 1e6;
	
	while(end <= s.size() - 1)
	{
		mp[s[end]]++;
		
		while(mp.size() == 26)
		{
			len = min(len,end - begin + 1);
			
			mp[s[begin]]--;
			if(mp[s[begin]] == 0) mp.erase(s[begin]);
			begin++;
		}
		++end;
	}
	
	cout << len << endl;
	
	return 0;
}
