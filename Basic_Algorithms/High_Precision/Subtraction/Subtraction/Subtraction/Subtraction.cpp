
#include <iostream>
using namespace std;

const int N = 1e5;
string x, y;

int la, lb, lc;
int a[N], b[N], c[N];

bool cmp(string& x,string& y)
{
    //根据长度
    if (x.size() != y.size()) return x.size() < y.size();

    //按照字典序
    return x < y;
}


//法一：
void Sub1()
{
    for (int i = 0; i < lc; i++)
    {
        a[i] += c[i];

        if (a[i] < b[i])
        {
            a[i] += 10;
            c[i + 1]--;
        }
        c[i] = a[i] - b[i];
    }
    while (lc > 1 && c[lc - 1] == 0) lc--;
    //if (c[lc - 1] == 0) lc--;
}

//法二：
void Sub2()
{
    for (int i = 0; i < lc; i++)
    {
        c[i] += a[i] - b[i];
        if (c[i] < 0)
        {
            c[i + 1]--;
            c[i] += 10;
        }
    }

    //处理前导零
    while (lc > 1 && c[lc - 1] == 0) lc--;
}



int main()
{
    cin >> x >> y;

    if (cmp(x, y))
    {
        swap(x, y);
        cout << "-";
    }

    la = x.size();
    lb = y.size();
    lc = max(la, lb);



    for (int i = 0; i < la; i++) a[i] = x[la - 1 - i] - '0';
    for (int i = 0; i < lb; i++) b[i] = y[lb - 1 - i] - '0';

    //Sub1();
    Sub2();

    for (int i = lc - 1; i >= 0; i--)
    {
        cout << c[i];
    }
    cout << endl;

    return 0;
}