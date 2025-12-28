#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//	int a,b,c,d,e;
//	cin >> a >> b >> c >> d >> e;
//	a/=3; b+=a; e+=a;
//	b/=3; a+=b; c+=b;
//	c/=3; b+=c; d+=c;
//	d/=3; c+=d; e+=d;
//	e/=3; d+=e; a+=e;
//	printf("%5d %5d %5d %5d %5d",a,b,c,d,e);
//	return 0;
//}

//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	double a = 3.1415926;
//	cout << a << endl;
//	cout << fixed << a << endl;
//	cout << scientific << a <<endl;
//	cout << fixed << setprecision(3) << a << endl;
//	return 0;
//}









//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	int a = 123;
//	cout << a << endl;
//	cout << setw(10) << left << a << endl;
//	cout << setw(10) << right << a << endl;
//	return 0;
//}


//#include <iostream>
//#include <iomanip>
//#include <cmath>
//using namespace std;
//int main()
//{
//    double a,b,c;
//    cin >> a >> b >> c;
//    double p = (a+b+c)/2;
//    double s = sqrt(p*(p-a)*(p-b)*(p-c));
//    cout << fixed << setprecision(1) << s << endl;
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//int main()
//{
////    int m,n;
////    cin >> m >> n;
////    if(m % n == 0)
////    {
////        cout << "YES" << endl;
////    }
////    else
////        cout << "NO" << endl;
//    return 0;
//}


//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//    float f;
//    cin >> f;
//    if(f > 0)
//        cout << fixed << setprecision(2) << f << endl;
//    if(f < 0)
//        cout << fixed << setprecision(2) << f * (-1) << endl;
//    return 0;
//}





//#include <iostream>
//using namespace std;
//int m;
//int main()
//{
//	cin >> m;
//	if(m % 2 == 0)
//	cout << "even" << endl;
//	else
//	cout << "odd" << endl;
//	return 0; 
//}

//#include <iostream>
//using namespace std;
//int C,M,E;
//int main()
//{
//	cin >> C >> M >> E;
//	if(C < 60 || M < 60 || E < 60)
//	cout << 1 << endl;
//	else
//	cout << 0 << endl; 
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int s1 ,s2,s3,count;
//	cin >> s1 >> s2 >> s3;
//	if(s1 < 60)
//	count++;
//	if(s2 < 60)
//	count++;
//	if(s3 < 60)
//	count++;
//	if(count == 1)
//	cout << 1 << endl;
//	else
//	cout << 0 << endl; 
//	return 0; 
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    int a1,a2,n;
//    cin >> a1 >> a2 >> n;
//    int a = a1+(n-1)*(a2-a1);
//    cout << a << endl;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    int a,b,c;
//    cin >> a >> b >> c;
//    if(a > b)
//    {
//        int r = (a > c? a : c);
//        cout << r << endl;
//    }
//    if(a > c)
//    {
//        int r = (a > b? a : b);
//        cout << r << endl;
//    }
//    if(b > c)
//    {
//        int r = (b > a? b : a);
//        cout << r << endl;
//    }
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    int a,b,c;
//    cin >> a >> b >> c;
//    int m = (a > b ? a : b);
//    if(m > c)
//        cout << m << endl;
//    else
//        cout << c << endl;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    int x,y;
//    cin >> x >> y;
//    int z = (y % x == 0 ? x + y : y - x);
//    cout << z << endl;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    unsigned int m,t,s;
//    cin >> m >> t >> s; 
//    if(t == 0)
//        cout << m << endl;
//    if(t)
//    {
//        unsigned int n = (s % t == 0 ? s / t : s / t + 1);
//        cout << m - n << endl; 
//    }
//    return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//    int m;
//    cin >> m;
//    if((m % 400 == 0) || (m % 4 == 0) && (m % 100 != 0))
//        cout << 1 << endl;
//    else
//        cout << 0 <<endl;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    int date;
//    cin >> date;
//    if(date % 2 )
//    cout << "NO" << endl;
//    else
//    cout << "YES" << endl;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    int a,b,c;
//    cin >> a >> b >> c;
//    if(a + b > c && a + c > b && b + c > a)
//        cout << 1 << endl;
//    else 
//        cout << 0 << endl;
//    return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	int x;
//	cin >> x;
//	if((x % 3 == 0) && (x % 5 == 0) && (x % 7 == 0))
//	cout << "3 5 7" << endl;
//	else if((x % 3 == 0) && (x % 5 == 0))
//	cout << "3 5" << endl;
//	else if(x % 3 == 0 && (x % 7 == 0))
//	cout << "3 7" << endl;
//	else if((x % 5 == 0) && (x % 7 == 0))
//	cout << "5 7" << endl;
//	else if(x % 3 == 0)
//	cout << "3" << endl;
//	else if(x % 5 == 0)
//	cout << "5" << endl;
//	else if(x % 7 == 0)
//	cout << "7" << endl;
//	else
//	cout << "n" << endl;  
//	return 0; 
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int x;
//	cin >> x;
//	if(x % 3 == 0)
//	{
//		cout << 3 << " ";
//		if(x % 5 == 0)
//		{
//			cout << 5 << " ";
//			if(x % 7 == 0)
//			{
//				cout << 7 << " ";
//			}
//		 } 
//	}
//	if((x % 3 != 0) && (x % 5 != 0) && (x % 7 != 0))
//	cout << "n" << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int x;
//	cin >> x;
//	if(x % 3 == 0)
//	cout << 3 << " ";
//	if(x % 5 == 0)
//	cout << 5 << " ";
//	if(x % 7 == 0)
//	cout << 7 << endl;
//	
//	if((x % 3 != 0) && (x % 5 != 0) && (x % 7 != 0))
//	cout << "n" << endl;
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int s = 0;
//	scanf("%d",&n);
//	while(i <= n)
//	{
//		s+=i;
//		i++;
//	}
//	printf("%d\n",s);
//	return 0;
//}





//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int s = 0;
//	scanf("%d",&n);
//	do
//	{
//		s+=i;
//		i++;
//	}while(i <= n);
//	printf("%d\n",s);
//	return 0;
//}


#include <stdio.h>
int main()
{
	int n = 0;
	int s = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		s += i;
	}
	printf("%d\n", s);
	return 0;
}














//#include <iostream>
//using namespace std;
//int main()
//{
//    char a,b,c,d,e;
//    cin >> a >> b >> c >> d >> e;
//    cout << e << d << c << b << a << endl;
//    return 0;
//} 














//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	//控制cout输出格式 
//	int a = 10;
//	cout << a << endl;;
//	cout << setw(5) << a << endl;;
//	cout << setw(5) << setfill('x') << a << endl;;
//	return 0;
//}

