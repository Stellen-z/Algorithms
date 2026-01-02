#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,num;
	int count = 0;
	cin >> n;
	if(n == 1)
	cout << 2 << endl;
	else
	{
				for(int i = 0;i < 30000;i++)
		{
			num = i;

				for(int j = 3;j < sqrt(30000);j += 2) 
			{
				if(num % j != 0)
				{
					count++;
					break;
				}
				num++;
			}
			if(count == n)
			{
				cout << num << endl;
				break;
			}
		}
	}

	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	int i = 2;
	int cnt = 0;
	cin >> n; 
	while(1)
	{
		//判断是否为素数
		int flag = 1;//假设i是素数 
		for(int j = 2;j <= sqrt(i);j++)
		{
			if(i % j == 0)
			{
				//不是素数
				flag = 0;
				break; 
			}
		}
		//即使不是素数，break之后也会到这 
		if(flag == 1)
		cnt++;
		if(cnt == n)
		break;
		i++;
	}
	cout << i << endl;
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	int i = 2;
	int cnt = 0;
	cin >> n; 
	while(1)
	{
		//判断是否为素数
		int flag = 1;//假设i是素数 
		
		if(i > 2 && i % 2 == 0)
		flag = 0;//跳过偶数 
		else
		{
			for(int j = 3;j <= (int)sqrt(i);j++)
		{
			if(i % j == 0)
			{
				//不是素数
				flag = 0;
				break; 
			}
		}
		}
		//即使不是素数，break之后也会到这 
		if(flag == 1)
		cnt++;
		if(cnt == n)
		break;
		if(i == 2)
		i++;
		else
		i += 2;
	}
	cout << i << endl;
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i = 2;
	int cnt = 0;
	//循环产生数字
	while(1)
	{
		int flag = 1;//假设是素数 
		//判断是否为素数
		if(i == 2)
		{
			flag = 1;
		}
		else
		{
			for(int j = 3;j <= (int)sqrt(i);j += 2)
		{
			//只需试除3~sqrt(i)
			if(i % j == 0)
			{
				//不是素数
				flag = 0; 
				break; 
			} 
		}
		}

		if(flag == 1)
		cnt++;
		
		if(cnt == n)
		{
			cout << i << endl;
			break;
		}
		 
		if(i == 2)
		i++;
		else
		i += 2;//过滤偶数 
	} 
	return 0;
}


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,c;
	int tmp,num;
	for(int i = 100;i <= 999;i++)
	{
		tmp = num = i;
		a = num % 10;
		num /= 10;
		b = num % 10;
		c = num /= 10;
		//进行判断
		if(tmp == (int)pow(a,3) + (int)pow(b,3) + (int)pow(c,3))
			cout << tmp << endl; 
	}
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	for(int i = 100;i <= 999;i++)
	{
		int tmp = i;
		int ret = 0;
		while(tmp)
		{
			ret += pow(tmp % 10,3);
			tmp /= 10;
		}
		if(ret == i)
		cout << ret << endl;
	}
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i = 2;
	int cnt = 0;//计数器 
	while(1)
	{
		int flag = 1;//假设i是素数 
		//寻找素数
		if(i == 2)
		 {
		 	flag = 1;
		 }
		 else
		 {
		 	for(int j = 3;j <= (int)sqrt(i);j++)
		 {
			if(i % j == 0)
			{
				//不是素数
				flag = 0;
				break; 
			}
		 }
	     }
	      
		 if(flag == 1)
		 cnt++;
		 if(cnt == n)
		 {
		 	cout <<  i << endl;
		 	break;
		 }
		 if(i == 2)
		 i++;
		 else
		 i += 2;//过滤偶数
	}
	return 0;
}

//复习数组
#include <iostream>
using namespace std;
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0;i < sz;i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
} 

/* memset example */
#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "almost every programmer should know memset!";
  memset (str,'-',6);
  puts (str);
  return 0;
}

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char arr[] = "Hello World!";
	memset(arr,'*',6);
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0;i < sz;i++)
	{
		cout << arr[i];
	}
	return 0;
}

#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s = "abc";
    cout << "s:" << s << endl;
    //尾删
    s.pop_back();
    cout << "s:" << s << endl;
    //尾删
    s.pop_back();
    cout << "s:" << s << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//范围for的使用
	for(auto m : arr)
	{
		cout << m << " ";
	} 
	 cout << endl;
	return 0;
}

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10];

	memcpy(arr2, arr1, sizeof(arr1));

	for (int e : arr2)
	{
		cout << e << " ";
	}
	cout << endl;

	return 0;
}