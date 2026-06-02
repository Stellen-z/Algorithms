//×Ö·û´®À©Õ¹
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;

int p1,p2,p3;
string s;


string Slove(int left,int right)
{
	string ret = "";

	
	for(char i = s[left] + 1;i < s[right];i++)
	{
		int m = p2;
		while(m--)
		{
			ret += i;
		} 
	}
	
	
	
	for(int i = 0;i < ret.size();i++)
	{
		if(p1 == 2 && isalpha(ret[i])) ret[i] = toupper(ret[i]);
		if(p1 == 3) ret[i] = '*';
		
	}
	
	if(p3 == 2)
	{
		int begin = 0,end = ret.size() - 1;
		while(begin < end)
		{
			swap(ret[begin++],ret[end--]);
		}
	}
	
	
	ret += s[right];
	
	return ret;
}

int main()
{
	cin >> p1 >> p2 >> p3;
	cin >> s;
	
	string ret = "";
	
	int begin = 0,cur = 1;
	ret += s[0];
	while(cur < s.size())
	{
		if(s[cur] == '-')
		{
			int end = cur + 1;
			if(s[end] == s[begin] + 1)
			{
				ret += s[end];
			}
			else if(s[end] <= s[begin])
			{
				ret += '-';
				ret += s[end];
			}
			else 
			{
				if(islower(s[begin]) && islower(s[end]) || 
				isdigit(s[begin]) && isdigit(s[end]))
				ret += Slove(begin,end);
				else
				{
					ret += '-';
					ret += s[end];
				}
			}
			begin = end;
			cur = end+1;
		}
		else
		{
			ret += s[cur];
			begin = cur;
			cur++;
		}
		
	}
	
	cout << ret << endl;
	return 0;
}


#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>

using namespace std;

int p1,p2,p3;
string s,ret;

void slove(char left,char right)
{
	string tmp = "";
	
	for(char i = left + 1;i <= right - 1;i++)
	{
		char ch = i;
		if(p1 == 2) ch = toupper(ch);
		if(p1 == 3) ch = '*';
		
		for(int j = 1;j <= p2;j++)
		{
			tmp += ch;
		}
	}
	
	if(p3 == 2) reverse(tmp.begin(),tmp.end());
	
	ret += tmp;
}

bool check(char left,char right)
{
	return (isdigit(left) && isdigit(right)||
	        islower(left) && islower(right)); 
}

int main()
{
	cin >> p1 >> p2 >> p3;
	cin >> s;
	
	
	for(int i = 0;i < s.size();i++)
	{
		if(i != 0 && s[i] == '-' && i != s.size() - 1)
		{
			char left = s[i-1];
			char right = s[i+1];
			
			if(check(left,right))
			{
				if(right == left + 1) ret += "";
				else if(right <= left) ret += s[i];
				else slove(left,right); 
			} 
			else
			{
				ret += s[i];
			}
		}
		else
		{
			s[i] += s[i];
		}
	}	
	
	
	cout << ret << endl;
	return 0;
 } 
