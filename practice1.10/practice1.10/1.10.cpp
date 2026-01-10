#define _CRT_SECURE_NO_WARNINGS
/* ceil example */
#include <stdio.h>      /* printf */
#include <math.h>       /* ceil */

int main ()
{
  printf ( "ceil of 2.3 is %.1f\n", ceil(2.3) );
  printf ( "ceil of 3.8 is %.1f\n", ceil(3.8) );
  printf ( "ceil of -2.3 is %.1f\n", ceil(-2.3) );
  printf ( "ceil of -3.8 is %.1f\n", ceil(-3.8) );
  return 0;
}

#include <iostream>
using namespace std;
const int N = 100;
int arr1[N][N];//旧数据 
int arr2[N][N]; //新数据 
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr1[i][j];
			arr2[i][j] = arr1[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
				arr1[i][j] = arr1[i][j];
			else
				arr2[i][j] = (arr1[i - 1][j] + arr1[i][j + 1] + arr1[i + 1][j] + arr1[i][j - 1] + arr1[i][j]) / 5.0 + 0.5;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
