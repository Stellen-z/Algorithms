#include <iostream>

using namespace std;

const int N = 1e4 + 10;

int a[N],b[N]; 
int n;

int GetNumsNon()
{
	//通过b[n]能退出a[n+1]的雷个数 
	for(int i = 2;i <= n + 1;i++)
	{
		a[i] = b[i - 1] - a[i - 1] - a[i - 2];
		
		if(a[i] > 1 || a[i] < 0) return 0;
	}
	//if(a[n] > 1 || a[n] < 0) return 0;
	
	return a[n + 1] == 0;
	 
}

int GetNums()
{
	a[1] = 1;
	for(int i = 2;i <= n + 1;i++)
	{
		a[i] = b[i - 1] - a[i - 1] - a[i - 2];
		
		if(a[i] > 1 || a[i] < 0) return 0;
	}
	//if(a[n] > 1 || a[n] < 0) return 0;
	
	return a[n + 1] == 0;
}


int main()
{
	cin >> n;
	
	for(int i = 1;i <= n;i++) cin >> b[i];
	
	int ret = 0;
	
	ret += GetNumsNon();
	
	ret += GetNums();
	
	cout << ret << endl;
	return 0;
}
