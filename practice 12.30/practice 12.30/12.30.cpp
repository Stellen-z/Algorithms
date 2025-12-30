#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int s1,s2,s3;
int main()
{
	int n;
	cin >> n;
	int a,b,c;

	for(int i = 0;i < n;i++)
	{
		cin >> a >> b >> c;
        s1+=a;
		s2+=b;
		s3+=c;		 
	}
	int ret = s1 + s2 + s3;
	cout << s1 <<" " << s2 << " " << s3 << " " << ret << endl;
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	int n,r1,r2;
	double x,y;
	int count = 0;;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		cin >> r1 >> r2;
		count++;
		if(count == 1)
		{
			 x = r2*1.0/r1;
		}
		else
		{
			 y = r2*1.0/r1;
			if(y - x > 0.05)
			cout << "better" << endl;
			else if(x - y > 0.05)
			cout << "worse" << endl;
			else
			cout << "same" << endl;
		}
	}
	return 0;
}



#include <iostream>
using namespace std;
int main()
{
	int n,r1,r2;
	double x,y;
	int count = 0;;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		cin >> r1 >> r2;
		count++;
		if(count == 1)
		{
			 x = r2*1.0/r1;
		}
		else
		{
			 y = r2*1.0/r1;
			if(y - x > 0.05)
			cout << "better" << endl;
			else if(x - y > 0.05)
			cout << "worse" << endl;
			else
			cout << "same" << endl;
		}
	}
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int p1,p2,n;
	float p,t1,t2;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		cin >> p1 >> p2;
        p = sqrt((p1 * p1) + (p2 * p2));
        t1 = p * 1.0 / 50;
        t2 = t1 * 1.0 *  2 + n * 1 + n * 0.5;
        if(t2 % 1 < 1)
        {
        	t2 = (int)t2 + 1;
		}
		cout << t2 << endl; 
	}
	
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,d1,d2,p;
	int dis;
	float t = 0;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		cin >> d1 >> d2 >> p;
		dis = sqrt((d1 * d1)+ (d2 * d2));
		t += p * 1 + dis / 50 + dis / 50 + p * 0.5;
		//取模运算符只能用于整数 
	}
	t = (int)ceil(t);
	cout << t << endl; 
	return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
    double s1 = 0;
    double s2 = 0;
	cin >> n;
	while(n >= 1)
	{
	if(n % 2)
	{
		s1 += 1 * 1.0 / n;
		n--;
	}
	else
	{
		s2 += 1 * 1.0 / n;
		n--;
	}
	}
	cout << fixed << setprecision(4) << s1-s2 << endl;
	return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	double sn = 0.0;
	int flag = 1;
	cin >> n;
	for(int i = 1;i <= n ;i++)
	{
		sn += flag * 1.0 / i;
		flag *= (-1); 
	}
	cout << fixed << setprecision(4) << sn << endl;
	return 0;
}

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	double sn = 0;
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		sn += pow(-1,i-1) * 1.0 / i;
	}
	cout << fixed << setprecision(4) << sn;
	return 0;
}
