#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <cstring>
#include <string>
using namespace std;

struct cmp
{
	bool operator()(int a, int b)
	{
		if (abs(a) == abs(b))
			return a > b; 
		return abs(a) > abs(b); 
	}
};

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

	int N;

	cin >> N;

	priority_queue<int, vector<int>, cmp> pq;

    for (int i = 0; i < N; i++) 
    {
		int x;
		cin >> x;
		if (x != 0)
		{
			pq.push(x);
		}
		else
		{
			if (pq.empty())
			{
				cout << 0 << '\n';
				continue;
			}
			cout << pq.top() << '\n';
			pq.pop();
		}
    }

    return 0;
}