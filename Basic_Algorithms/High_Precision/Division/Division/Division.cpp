#include <iostream>

using namespace std;

const int N = 1e5;

string x;
int y;

int a[N],c[N];
int la, lc;

void Div()
{
	//标记每次除完的余数
	long long t = 0;
	for (int i = la - 1; i >= 0; i--)
	{
		t = t * 10 + a[i];
		c[i] = t / y;
		t %= y;
	}

	//处理前导零
	while (lc > 1 && c[lc - 1] == 0) lc--;
}

	
int main()
{
	cin >> x >> y;
	la = x.size();
	lc = la;

	for (int i = 0; i < la; i++) a[i] = x[la - 1 - i] - '0';

	Div();

	for (int i = lc - 1; i >= 0; i--)
	{
		cout << c[i];
	}
	cout << endl;

	return 0;
}