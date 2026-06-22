#include <iostream>

using namespace std;

const int N = 1e5;

string x, y;

int la, lb, lc;
int a[N], b[N], c[N];


//无进位相乘，然后相加，最后处理进位
void Mul()
{
	for (int i = 0; i < la; i++)
	{
		for (int j = 0; j < lb; j++)
		{
			//i+j就是当前结果的位置
			c[i + j] += a[i] * b[j];
		}
	}

	//处理进位
	for (int i = 0; i < lc; i++)
	{
		c[i + 1] += c[i] / 10;
		c[i] %= 10;
	}

	//处理前导零
	while (lc > 1 && c[lc - 1] == 0) lc--;
}

int main()
{
	cin >> x >> y;
	la = x.size();
	lb = y.size();
	lc = la + lb;

	for (int i = 0; i < la; i++) a[i] = x[la - 1 - i] - '0';
	for (int i = 0; i < lb; i++) b[i] = y[lb - 1 - i] - '0';

	Mul();

	for (int i = lc - 1; i >= 0; i--)
	{
		cout << c[i];
	}
	cout << endl;

	return 0;
}