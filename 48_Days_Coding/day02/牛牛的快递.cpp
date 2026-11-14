#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float f;
	char c;
	cin >> f >> c;
	int ret = 0;
	
	if(f*1.0 <= 1.0) ret = 20;
	else 
	{
		f -= 1.0;
		ret += 20;
		
		// 1.循环
//		while(f*1.0 > 1.0)
//		{
//			f -= 1.0;
//			ret += 1;
//		}
//		
//		ret += 1;
		
		// 2.函数
		ret += ceil(f);
		
		// 3.取整
//		if(f - int(f) > 0) ret += int(f) + 1;
//		else ret += int(f);
	}
	
	if(c == 'y') ret += 5;
	
	cout << ret << endl;
	
	return 0;
}
