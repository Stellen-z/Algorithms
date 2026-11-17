#include <iostream>
#include <string>

using namespace std;

int st[26],kind;

int main()
{
	string s;cin >> s;
	int n = s.size() - 1;
	
	int ret = 1e7;
	int l = 1, r = 1;
	while(r <= n)
	{
		st[s[r] - 'a']++;
		if(st[s[r] - 'a'] == 1) kind++;
		
		while(kind == 26)
		{
			ret = min(r - l + 1,ret);
			
			st[s[l] - 'a']--;
			if(st[s[l] - 'a'] == 0) kind--;
			l++;
		}
		r++;
	}
	
	cout << ret << endl;
	
	return 0;
}
