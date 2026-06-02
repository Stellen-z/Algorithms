//多项式输出
#include <iostream>
#include <cmath>

using namespace std;

int n;

int main()
{
	cin >> n;
	
	string s = "";
	for(int i = n;i >= 0;i--)
	{
		string tmp = "";
		int a;cin >> a;
		
		if(a == 0) continue;
		
		//1.符号
		if(a < 0) tmp += '-';
		else if(i != n) tmp += '+';
		//2.数字
		a = abs(a);
		
		if(i == 0) tmp += to_string(a);
		else if(a != 1) tmp += to_string(a);
		//3.次数 
		if(i > 1)
		{
			tmp += "x^";
			tmp += to_string(i);
		}
		if(i == 1)
		{
			tmp += "x";
		}
		
		s += tmp;
		
	}
	
	
	cout << s << endl;
	return 0;
}



#include <iostream>
#include <cmath>
using namespace std;

int n;

int main()
{
	cin >> n;
	for(int i = n;i >= 0;i--)
	{
	int a;cin >> a;
	if(a == 0) continue;
	//1.符号
	if(a < 0) cout << '-';
	else
	{
		if(i != n) cout << '+';
	} 
	//2.数字
	a = abs(a);
	if(a != 1 || (a == 1 && i == 0)) cout << a;
	//3.次数 
	if(i == 0) continue;
	else if(i == 1) cout << "x";
	else cout << "x^" << i;
	}
	return 0;
}
