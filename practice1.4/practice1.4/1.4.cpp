#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
const int N = 110;
int arr[N] = { 0 };
using namespace std;
int main()
{
	int n;
	float cnt1 = 0;
	float cnt2 = 0;
	float cnt3 = 0;
	float cnt4 = 0; 
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	//遍历数组 
	for(int i = 0;i < n;i++)
	{
		if(arr[i] >= 0 && arr[i] <= 18)
			cnt1++;
		else if(arr[i] > 18 && arr[i] <= 35)
			cnt2++;
		else if(arr[i] > 35 && arr[i] <= 60)
		    cnt3++;
		else
		    cnt4++;
	}
	cout << fixed << setprecision(2) << cnt1 / n * 100 << '%' << endl;
	cout << fixed << setprecision(2) << cnt2 / n * 100 << '%' << endl;
	cout << fixed << setprecision(2) << cnt3 / n * 100 << '%' <<endl;
	cout << fixed << setprecision(2) << cnt4 / n * 100 << '%' << endl;
	
	return 0;
} 

#include <iostream>
using namespace std;
const int N = 5010;
int arr[N] = { 0 };//关闭所有的灯 
int main()
{
	int n;
	cin >> n;
	for(int i = 2;i <= n;i++)
	{
		//i是人的编号 
		for(int j = i;j <= n;j++)
		{
			//j是灯的编号 
			if(j % i == 0)
			{
				arr[j] = !arr[j];
			}
		}
	}
	for(int i = 1;i <= n;i++)
	{
		if(arr[i] == 0)
		   cout << i << " ";
	} 
	cout << endl;
	return 0;
}

//输出1-10000内的质数
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	for(int i = 2;i < 10000;i++)
	{
		//过滤掉偶数
		if(i == 2)
		{
			cout << i << " ";
			continue;
		} 
		else
		i += 2;
		for(int j = i;j < sqrt(i);j++)
		{
			if(i % j == 0)
			break;
		}
		
	}
	return 0;
} 


#include <iostream>
#include <cmath> // 用于sqrt函数
using namespace std;

// 函数：判断一个数是否为质数
// 参数：n - 待判断的整数
// 返回值：true（是质数）/ false（不是质数）
bool isPrime(int n) {
    // 边界1：小于等于1的数不是质数
    if (n <= 1) {
        return false;
    }
    // 边界2：2是唯一的偶质数
    if (n == 2) {
        return true;
    }
    // 边界3：大于2的偶数不是质数
    if (n % 2 == 0) {
        return false;
    }
    // 核心判断：遍历从3到√n的奇数（跳过偶数，进一步优化）
    int sqrt_n = sqrt(n); // 计算n的平方根
    for (int i = 3; i <= sqrt_n; i += 2) {
        if (n % i == 0) { // 能被整除，说明不是质数
            return false;
        }
    }
    // 所有情况都不满足，是质数
    return true;
}

int main() {
    int num;
    cout << "请输入一个整数：";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " 是质数" << endl;
    } else {
        cout << num << " 不是质数" << endl;
    }

    return 0;
}



#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout << "请输入一个整数：";
    cin >> num;

    int is_prime = 1; // 初始假设是质数（1），后续验证后修正
    if (num <= 1) {
        is_prime = 0;
    } else if (num == 2) {
        is_prime = 1;
    } else if (num % 2 == 0) {
        is_prime = 0;
    } else {
        int sqrt_n = sqrt(num);
        for (int i = 3; i <= sqrt_n; i += 2) {
            if (num % i == 0) {
                is_prime = 0;
                break; // 找到因数，直接退出循环
            }
        }
    }

    if (is_prime == 1) {
        cout << num << " 是质数" << endl;
    } else {
        cout << num << " 不是质数" << endl;
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
	int flag = 1;//假设是质数
	if(n <= 1)
	flag = 0;
	else if(flag == 2)
	flag = 1;
	else if(n % 2 == 0)
	flag = 0;
	else
	{
		for(int i = 3;i <= (int)sqrt(n);i += 2)
	  {
		if(n % i == 0)
		{
			flag = 0;
			break;
		}
	  }
	}
	if(flag == 1)
	cout << "是质数" << endl;
	else
	cout << "非质数" << endl; 
	return 0;
}

//输出1-10000内的所有质数 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	for(int n = 1;n <= 10000;n++)
	{
			int flag = 1;//假设是质数
	if(n <= 1)
	flag = 0;
	else if(flag == 2)
	flag = 1;
	else if(n % 2 == 0)
	flag = 0;
	else
	{
		for(int i = 3;i <= (int)sqrt(n);i += 2)
	  {
		if(n % i == 0)
		{
			flag = 0;
			break;
		}
	  }
	}
	if(flag == 1)
	cout << n << " ";
	} 
	return 0;
}
