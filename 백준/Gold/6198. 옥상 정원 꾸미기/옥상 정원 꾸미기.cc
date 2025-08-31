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

    vector<int> height(N, -1);

    for(int i = 0 ; i < N; i++)
    {
        cin >> height[i];
    }

    long long int answer = 0;

    stack<int> s;

    for(int i = 0; i < N; i++)
    {
        if(s.empty())
        {
            s.push(height[i]);
            continue; // tq
        }
        else
        {
            while(!s.empty() && s.top() <= height[i])
            {
                s.pop();
            }
        }

        answer += s.size();

        s.push(height[i]);
    }

    cout << answer << '\n';

    return 0;
}