#include <iostream>

using namespace std;

const int N = 1e4 + 10;

int n;
int a[N], b[N], g[N], k[N];
int x, y;

int GetCarpetNums()
{
	cin >> x >> y;

	//逆序遍历即可
	for (int i = n; i >= 0; i--)
	{
		if (a[i] <= x && x <= a[i] + g[i] && b[i] <= y && y <= b[i] + k[i])
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i] >> b[i] >> g[i] >> k[i];

	cout << GetCarpetNums() << endl;

	return 0;
}