#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

const int N = 110;
int arr[N] = { 0 };

int main()
{
	int n;
	int cnt = 0;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	for(int i = 0;i < n;i++)
	{
		if(i == 0)
		{
			cout << 0 << " ";
			continue;
		}
		for(int j = 0;j < i;j++)
		{
			if(arr[j] < arr[i])
			cnt++;
		}
		if(i < n)
		{
			cout << cnt << " ";
		    cnt = 0;
		}	 
	}
	return 0;
}

#include <iostream>
using namespace std;

const int N = 110;
int arr[N] = { 0 };

int main()
{
	int n;
	int cnt = 0;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	for(int i = 0;i < n;i++)
	{
		int cnt = 0;
		for(int j = 0;j < i;j++)
		{
			if(arr[j] < arr[i])
			cnt++;
		}
		cout << cnt << " ";
	}
	return 0;
}

#include <iostream>
using namespace std;

const int N = 30;
int arr[N] = { 0 };

int main()
{
	int n = 0;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	for(int i = 0;i < n-1;i++)
	{
		for(int j = 0;j < n - 1- i;j++)
		{
			if(arr[j] < arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	for(int i = 0;i < n;i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}


#include <iostream>
using namespace std;
int arr[25][25];
int main()
{
	int n = 0;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		//行号 
		for(int j = 0;j <= i;j++)
		{
			//列号
			if(j == 0 || i == j)
				arr[i][j] = 1;
			else if(i >= 2 && j >= 1)
				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

#include <iostream>
using namespace std;
int arr[5][5];
int main()
{
	for(int i = 0;i < 5;i++)
	{
		for(int j = 0;j < 5;j++)
		{
			cin >> arr[i][j];
		}
	}
	int m,n;
	cin >> m >> n;
	m--;
	n--;
	//进行交换
	int tmp[5] = { 0 };
	for(int j = 0;j < 5;j++)
	{
	    tmp[j] = arr[m][j];
		arr[m][j] = arr[n][j];
		arr[n][j] = tmp[j];		
	}
	for(int i = 0;i < 5;i++)
	{
		for(int j = 0;j < 5;j++)
		{
			cout << arr[i][j];
			if(j != 4)
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}


#include <iostream>
#include <iomanip>
using namespace std;

int arr1[110][110];
int arr2[110][110];

int main()
{
	int m, n;
	cin >> m >> n;
	int cnt = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr1[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr2[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr1[i][j] == arr2[i][j])
				cnt++;
		}
	}
	cout << fixed << setprecision(2) << cnt * 1.0 / (m * n) * 100 << endl;
	return 0;
}
