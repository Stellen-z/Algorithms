#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <map>

using namespace std;

unordered_map<int,int> row;
unordered_map<int,int> col;

class cmp
{
public:
	bool operator()(const pair<int,int>& x,const pair<int,int>& y)
	{
		if(x.second != y.second) return x.second > y.second;
		return x.first < y.first;
	}
};

int main()
{
	int m,n,k,l,d;
	cin >> m >> n >> k >> l >> d;
	
	for(int i = 1;i <= d;i++)
	{
			int x1,y1,x2,y2;
			cin >> x1 >> y1 >> x2 >> y2;
			
			if(x1 == x2) col[min(y1,y2)]++;
			if(y1 == y2) row[min(x1,x2)]++;
	}
	
	vector<pair<int,int>> v1(row.begin(),row.end());
	vector<pair<int,int>> v2(col.begin(),col.end());
	
	sort(v1.begin(),v1.end(),cmp());
	sort(v2.begin(),v2.end(),cmp());
	
	map<int,int> ret_row;
	map<int,int> ret_col;
	
	for(int i = 0;i < k && i < v1.size();i++)
	{
		ret_row.insert(v1[i]);
	}
	
	for(int i = 0;i < l && i < v2.size();i++)
	{
		ret_col.insert(v2[i]);
	}
	
	for(auto& e : ret_row)
	{
		cout << e.first << " ";
	}
	cout << endl;
	
	for(auto& e : ret_col)
	{
		cout << e.first << " ";
	}
	cout << endl;
	
	return 0;
}
