//1.楂樼簿搴﹀姞娉?
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1e5;

int max_len;

int p[N],q[N];
int ret[N];

//楂樼簿搴﹀姞娉曟ā鏉?
void add(int p[],int q[],int ret[])
{
	for(int i = 0;i < max_len;i++)
	{
		ret[i] += p[i] + q[i];
		ret[i + 1] = ret[i] / 10;
		ret[i] %= 10;
	}
	if(ret[max_len]) max_len++;
}

int main()
{
	string a,b;
	cin >> a >> b;
	
	
	//1.鍏堥€嗙疆 
	for(int i = 0;i < a.size();i++) p[a.size()-1-i] = a[i] - '0';
	for(int i = 0;i < b.size();i++) q[b.size()-1-i] = b[i] - '0';
		
	max_len = max(a.size(),b.size());
	
	//2.璁＄畻
	add(p,q,ret); 
	 
	//3.閫嗗簭杈撳嚭
	for(int i = max_len - 1;i >= 0;i--) cout << ret[i];
	cout << endl;
	return 0;
}

