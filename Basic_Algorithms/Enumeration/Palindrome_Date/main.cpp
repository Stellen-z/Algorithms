#include <iostream>

using namespace std;

int x,y;

int day[] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
int cnt;

int main()
{
	cin >> x >> y;
	
	//按月日筛选
	for(int i = 1;i <= 12;i++)
	{
		for(int j = 0;j <= day[i];j++)
		{
			//月日
			int p = i * 100 + j;
			//年份
			int q = (j % 10) * 1000 + (j / 10) * 100 + (i % 10) * 10 + i / 10;
			
			//日期
			int date = q * 10000 + p;
			
			if(x <= date && date <= y) cnt++; 
		}
	} 
	
	cout << cnt << endl;
	return 0;
} 
