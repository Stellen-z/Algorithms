#define _CRT_SECURE_NO_WARNINGS
//1.vector存储
//#include <iostream>
//#include <vector>
//using namespace std;
//
//const int N = 1e5 + 10;
//bool st[N];
//int n;
//vector<int> edges[N];
//
//void DFS(int u)
//{
//	cout << u << " ";
//	st[u] = true;
//
//	//遍历未被访问过的结点
//	for (auto e : edges[u])
//	{
//		if (!st[e])
//		{
//			DFS(e);
//		}
//	}
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		int a, b; cin >> a >> b;
//		edges[a].push_back(b);
//		edges[b].push_back(a);
//	}
//	DFS(1);
//	return 0;
//}

//2.链式前向星
//#include <iostream>
//using namespace std;
//
//const int N = 1e5 + 10;
//int h[N], e[N * 2], ne[N * 2], id;
//int n;
//bool st[N];
//
//void add(int x, int y)
//{
//	//讲y头插到x的链表中(头结点的下一个元素)
//	e[++id] = y;
//	ne[id] = h[x];
//	h[x] = id;
//}
//
//void DFS(int u)
//{
//	cout << u << " ";
//	st[u] = true;
//	for (int i = h[u]; i; i = ne[i])
//	{
//		if (!st[e[i]])
//		{
//			DFS(e[i]);
//		}
//	}
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		int a, b; cin >> a >> b;
//		add(a, b);
//		add(b, a);
//	}
//	DFS(1);
//	return 0;
//}

//层序遍历BFS
//1.用vector数组存储树
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//const int N = 1e5 + 10;
//vector<int> edges[N];
//int n;
//bool st[N];
//
//void BFS()
//{
//	queue<int> q;
//	q.push(1);
//	st[1] = true;
//
//	while (q.size())
//	{
//		int u = q.front();
//		q.pop();
//		cout << u << " ";
//
//		for (auto e : edges[u])
//		{
//			if (!st[e])
//			{
//				q.push(e);
//				st[e] = true;
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		int a, b; cin >> a >> b;
//		edges[a].push_back(b);
//		edges[b].push_back(a);
//	}
//	BFS();
//	return 0;
//}

//2.链式前向星
#include <iostream>
#include <queue>
using namespace std;

const int N = 1e5 + 10;
int id,h[N], e[N * 2], ne[N * 2];
int n;
bool st[N];

void add(int x, int y)
{
	e[++id] = y;
	ne[id] = h[x];
	h[x] = id;
}
void BFS()
{
	queue<int> q;
	q.push(1);
	st[1] = true;

	while (q.size())
	{
		int u = q.front();
		q.pop();
		cout << u << " ";
		for (int i = h[u]; i; i = ne[i])
		{
			if (!st[e[i]])
			{
				q.push(e[i]);
				st[e[i]] = true;
			}
		}
	}
}

int main()
{
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		int a, b; cin >> a >> b;
		add(a, b);
		add(b, a);
	}
	BFS();
	return 0;
}
