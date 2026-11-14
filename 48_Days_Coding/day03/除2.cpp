#include <iostream>
#include <queue>

using namespace std;
typedef long long LL;

priority_queue<int> heap;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n,k;
	cin >> n >> k;
	
	LL ret = 0;
	for(int i = 1;i <= n;i++)
	{
		int x;cin >> x;
		if(x % 2) ret += x;
		else heap.push(x);
	}
	
	while(k-- && !heap.empty())
	{
		int key = heap.top() / 2;
		heap.pop();
		if(key % 2) ret += key;
		else heap.push(key);
	}
	
	while(!heap.empty())
	{
		ret += heap.top();
		heap.pop();
	}
	
	cout << ret << endl;
	
	return 0;
}
