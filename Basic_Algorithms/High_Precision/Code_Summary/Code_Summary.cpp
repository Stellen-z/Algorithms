//1.高精度加法
#include <iostream>

using namespace std;

const int N = 1e5;

int a[N],b[N],c[N];

int la,lb,lc;

void Add()
{
    for(int i = 0;i < lc;i++)
    {
        c[i] += a[i] + b[i];
        c[i+1] = c[i] / 10;  // 进位
        c[i] %= 10;          // 保留当前位的值
    }
    //处理最高位
    if(c[lc]) lc++;
}

int main()
{
    string x,y;
    cin >> x >> y;
    la = x.size();
    lb = y.size();
    
    //求和的结果长度
    lc = max(la,lb);

    //1.逆序存储
    for(int i = 0;i < la;i++) a[i] = x[la - 1 - i] - '0';
    for(int i = 0;i < lb;i++) b[i] = y[lb - 1 - i] - '0';

    //2.计算
    Add();

    //3.逆序输出
    for(int i = lc - 1;i >= 0;i--)
    {
        cout << c[i];
    }
    cout << endl;


    return 0;
}


//2.高精度减法
#include <iostream>

using namespace std;

const int N = 1e5;


int a[N],b[N],c[N];

int la,lb,lc;

bool cmp(const string& x,const string& y)
{
    if(x.size() != y.size()) return x.size() < y.size();

    return x < y;
}

void Sub()
{
    for(int i = 0;i < lc;i++)
    {
        c[i] += a[i] - b[i];
        if(c[i] < 0)
        {
            c[i+1]--;
            c[i] += 10;
        }
    }

    //处理前导零
    while(lc > 1 && c[lc - 1] == 0) lc--;
}

int main()
{
    string x,y;
    cin >> x >> y;

    //比较
    if(cmp(x,y))
    {
        cout << '-';
        swap(x,y);
    }

    la = x.size();
    lb = y.size();
    
    //求和的结果长度
    lc = max(la,lb);

    //1.逆序存储
    for(int i = 0;i < la;i++) a[i] = x[la - 1 - i] - '0';
    for(int i = 0;i < lb;i++) b[i] = y[lb - 1 - i] - '0';

    //2.计算
    Sub();

    //3.逆序输出
    for(int i = lc - 1;i >= 0;i--)
    {
        cout << c[i];
    }
    cout << endl;


    return 0;
}


//3.高精度乘法
#include <iostream>

using namespace std;

const int N = 1e5;

int a[N],b[N],c[N];

int la,lb,lc;

void Mul()
{
    //先直接存储计算结果
    for(int i = 0;i < la;i++)
    {
        for(int j = 0;j < lb;j++)
        {
            c[i + j] += a[i] * b[j];
        }
    }
    //统一完成进位
    for(int i = 0;i < lc;i++)
    {
        //c[i+1]是有数值的，需要累加，避免覆盖
        c[i + 1] += c[i] / 10;
        c[i] %= 10;
    }

    //处理前导零
    while(lc > 1 && c[lc - 1] == 0) lc--;

}


int main()
{
    string x,y;
    cin >> x >> y;
    la = x.size();
    lb = y.size();
    
    //乘法结果长度
    lc = la + lb;

    //1.逆序存储
    for(int i = 0;i < la;i++) a[i] = x[la - 1 - i] - '0';
    for(int i = 0;i < lb;i++) b[i] = y[lb - 1 - i] - '0';

    //2.计算
    Mul();

    //3.逆序输出
    for(int i = lc - 1;i >= 0;i--)
    {
        cout << c[i];
    }
    cout << endl;


    return 0;
}

//4.高精度除法
#include <iostream>

using namespace std;

const int N = 1e5;

int y;
int a[N],c[N];

int la,lc;

void Div()
{
    long long t = 0;
    for(int i = lc - 1;i >= 0;i--)
    {
        if(t < y)
        {
            t = t * 10 + a[i];
        }
        c[i] = t / y;
        t %= y;
    }

    //处理前导零
    while(lc > 1 && c[lc - 1] == 0) lc--;
}



int main()
{
    string x;
    cin >> x >> y;
    la = x.size();
    
    //除法结果长度
    lc = la;

    //1.逆序存储
    for(int i = 0;i < la;i++) a[i] = x[la - 1 - i] - '0';

    //2.计算
    Div();

    //3.逆序输出
    for(int i = lc - 1;i >= 0;i--)
    {
        cout << c[i];
    }
    cout << endl;


    return 0;
}