#include <iostream>
#include <string>
using namespace std;

int main() 
{
	// string模拟栈
	string s;cin >> s;
	string ret;
	
	for(auto ch : s)
	{
		if(!ret.empty() && ret.back() == ch) ret.pop_back();
		else ret += ch;
	}
	
	cout << (ret.empty() ? "0" : ret) << endl;
}
// 64 位输出请用 printf("%lld")
