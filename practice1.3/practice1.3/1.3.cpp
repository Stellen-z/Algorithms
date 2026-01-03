#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define N 10010
using namespace std;
int arr[N];
int main()
{
	int n;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	 int dst;
	 cin >> dst;
	 int i = 0;
	 for(i = 0;i < n;i++)
	 {
	 	if(dst == arr[i])
	 	{
	 		cout <<  i << endl;
	 		break;
		}
	 }
	 if(i == n)
	 {
	 	cout << -1 << endl;
	 }	   
	return 0;
}

#include <iostream>
using namespace std;
const int N = 110;
int arr[N];
int main()
{
	int n;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	for(int j = n-1;j >= 0;j--)
	{
		cout << arr[j] << " ";
	}
	cout << endl;
	return 0;
}

#include <iostream>
using namespace std;
const int N = 110;
int arr[N];
int main()
{
	int n;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	int left = 0;
	int right = n - 1;
	while(left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	for(int i = 0;i < n;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}

#include <iostream>
using namespace std;
const int N = 1010;
int arr1[N] = { 0 };
int arr2[N] = { 0 };
int main()
{
	int n;
	int sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr1[i];
	}
	for (int i = 1; i <= n; i++)
	{
		cin >> arr2[i];
	}
	for (int i = 1; i <= n; i++)
	{
		sum += arr1[i] * arr2[i];
	}
	cout << sum << endl;
	return 0;
}
