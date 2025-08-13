#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <cstring>
#include <string>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;

	cin >> N;

    vector<vector<int>> graph(N);

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            int point;
            cin >> point;
            if(point == 1)
            {
                graph[i].push_back(j);
            }
        }
    }

    for(int i = 0; i < N; i++)
    {
        vector<int> visited(N, 0);
        stack<int> s;
        s.push(i);

        while(!s.empty())
        {
            int current = s.top();
            s.pop();

            for(int next : graph[current])
            {
                if(!visited[next])
                {
                    visited[next] = 1;
                    s.push(next);
                }
            }
        }

        for(int j = 0; j < N; j++)
        {
            cout << visited[j] << " ";
        }
        cout << '\n';
    }



    return 0;
}