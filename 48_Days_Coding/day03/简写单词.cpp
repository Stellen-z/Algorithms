#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() 
{
	string s;
	
	while(cin >> s)
	{
		char ch = s[0];
		// if(ch >= 'a' && ch <= 'z') cout << (char)(ch - 32);
		if(islower(ch)) cout << (char)toupper(ch);
		else cout << ch;
	}
	
	// getline(cin,s);
	// string ret;
	// for(int i = 0;i < s.size() - 1;i++)
	// {
	//     if(i == 0) ret += s[i];
	
	//     if(s[i] == ' ') ret += s[i+1];
	// }
	
	// for(auto& ch : ret)
	// {
	//     if(ch >= 'a' && ch <= 'z') ch -= 32;
	// }   
	
	// cout << ret;
	
}
// 64 位输出请用 printf("%lld")
