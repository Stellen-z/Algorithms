#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//int main()
//{
//	int c;
//	cin >> c;
//	
//	if((c % 2 == 0) && (4 < c <= 12))
//	cout << 1 << " ";
//	else
//	cout << 0 << " ";
//	
//	if((c % 2 == 0) || (4 < c <= 12))
//	cout << 1 << " ";
//	else
//	cout << 0 << " ";
//	
//	int r = 0;
//	if(c % 2 == 0) 
//	c++;
//	if(4 < c <= 12)
//	c++;
//	if(c == 1)
//	cout << 1 << " ";
//	else
//	cout << 0 << " ";
//	
//	if((c % 2 != 0) && (c <= 4) && (c > 12))
//	cout << 1 << " ";
//	else
//	cout << 0 << endl;
//	return 0;
// }


//#include <iostream>
//using namespace std;
//int main()
//{
//	int x;
//	cin >> x;
//	
//	if((x % 2 == 0) && (x > 4) && (x <= 12))
//    cout << 1 << " ";
//    else
//    cout << 0 << " ";
//    
//    if((x % 2 == 0) || ((x > 4) && (x <= 12)))
//    cout << 1 << " ";
//    else
//    cout << 0 << " ";
//    
//    int ret = 0;
//    if(x % 2 == 0)
//    ret++;
//	if((x > 4) && (x <= 12))
//	ret++;
//	if(ret == 1)
//	cout << 1 << " ";
//	else
//	cout << 0 << " ";
//	
//	if((x % 2 != 0) && (x <= 4) && (x > 12))
//	cout << 1 << " ";
//	else
//	cout << 0 << " " << endl;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	int x;
//	cin >> x;
//	
//	if((x % 2 == 0) && (x > 4) && (x <= 12))
//    cout << 1 << " ";
//    else
//    cout << 0 << " ";
//    
//    if((x % 2 == 0) || ((x > 4) && (x <= 12)))
//    cout << 1 << " ";
//    else
//    cout << 0 << " ";
//    
//    if((x % 2 == 0) + (x > 4 && x <= 12) == 1)
//    cout << 1 << " ";
//    else
//    cout << 0 << " ";
//	
//	if((x % 2 != 0) && ((x <= 4) || (x > 12)))
//	cout << 1 << " ";
//	else
//	cout << 0 << " " << endl;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    int month = n % 100;
//    switch(month)
//    {
//        case 3:
//        case 4:
//        case 5:
//            cout << "spring" << endl;
//        case 6:
//        case 7:
//        case 8:
//            cout << "summer" << endl;
//        case 9:
//        case 10:
//        case 11:
//            cout << "autumn" << endl;
//        case 12:
//        case 1:
//        case 2:
//            cout << "winter" << endl;
//            
//    }
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a,b;
//	char m;
//	cin >> a >> b >> m;
//	if(b == 0)
//	cout << "Divided by zero!" << endl;
//	else
//    {switch(m)
//	{
//		case '+':
//		    cout << a+b << endl;
//		    break;
//		case '-':
//			cout << a-b << endl;
//			break;
//		case '*':
//			cout << a*b << endl;
//			break;
//		case '/':
//			cout << a/b << endl;
//			break;
//		default:
//		    cout << "Invalid operator!"	<< endl;
//            break;
//	}
//    }
//	return 0;
//} 


//#include <iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    while(n > 0)
//    {
//        cout << n % 10;
//        n /= 10;
//    }
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	//采用字符方式
//	char a,b,c,d;
//	cin >> a >> b >> c >> d;
//	cout << d << c << b << a << endl; 
//	return 0;
//}
//




//#include <iostream>
//using namespace std;
//int main()
//{
//    int n;
//    int ret;
//    cin >> n;
//    if(n < 0)
//    {
//        n *= (-1);
//    }
//    while(n > 0)
//    {
//        ret += n % 10;
//        n /= 10;
//    }
//    cout << ret;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	//采用字符输入的方式
//	char a,b,c,d;
//	cin >> a >> b >> c >> d;
//	 
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    int n,ret;
//    int i = 1;
//    cin >> n;
//    while(i <= n)
//    {
//        ret += i;
//        i++;
//    }
//    cout << ret;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int i = 1;
//	int n = 0;
//	long long ret = 0;
//	cin >> n;
//	while(i <= n)
//	{
//		ret += i;
//		i++;
//	}
//	cout << ret;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	long long sum = 0;
//	cin >> sum;
//	cout << n*(n +1 )/2 << endl;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	long long m;
//	int k;
//	int count = 0;
//	
//	cin >> m >> k;
//	while(m > 0)
//	{
//		if(m % 10 == 3)
//		{
//			count++;
//		}
//		m /= 10;
//	}
//	if(count == k)
//	cout << "YES" << endl;
//	else
//	cout << "NO" << endl;
//	return 0;
//}

//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//	long long n;
//	cin >> n;
//	if(n == 1)
//	cout << "End" << endl;
//	while(n > 1)
//	{
//		if(n % 2 != 0)
//		{
//			cout << n << "*3+1" << n*3+1 << endl;
//			n = n*3+1;
//		}
//		else
//		{
//			cout << n << "/2" << n/2 << endl;
//		    n = n/2;
//		}
//	}
//	cout << "End" << endl;
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a=10;
//	
//	printf("a++ = %d\n", a++);
//	printf("a=%d\n", a);
//	printf("++a=%d\n", ++a);
//	printf("a=%d\n", a);
//	return 0;
//}


//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	double x;
//	int n;
//	double r = 1;
//	double sum = 1;
//	cin >> x >> n;
//	while(n--)
//	{
//		r *= x;//从x开始,x + x^2 + x^3 + ...... + x^n 
//		sum += r;
//	}
//	cout << fixed << setprecision(2) << sum << endl; 
//	return 0;
//}

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	int age;
	float sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> age;
		sum += age;
	}
	cout << fixed << setprecision(2) << sum / n << endl;
	return 0;
}