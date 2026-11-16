#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string s;

int main() 
{
	cin >> s;
	
	int begin = 0,end = 0;
	int ret_l = 0,ret_r = 0;
	int cnt = 0;
	
	int n = (int)s.size();
	int i = 0;
	while(i < n)
	{
		// if(s[i] >= '0' && s[i] <= '9')
		if(isdigit(s[i]))
		{
			begin = i;
			end = i;
			// while(end < n && (s[end] >= '0' && s[end] <= '9')) end++;
			while(end < n && isdigit(s[end])) end++;
			if(end - begin > cnt)
			{
				ret_l = begin;
				ret_r = end;
				cnt = ret_r - ret_l;
			}
			i = end;
		}
		else ++i;   
	}
	
	
	for(int i = ret_l;i < ret_r;i++)
	{
		cout << s[i];
	}
	
}
// 64 位输出请用 printf("%lld")
