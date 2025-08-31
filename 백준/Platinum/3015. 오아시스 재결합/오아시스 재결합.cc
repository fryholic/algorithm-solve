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

    stack<pair<int, int>> s;

    long long int answer = 0;

    for(int i = 0; i < N; i++)
    {
        int count_pair = 1;

        while(!s.empty() && s.top().first < height[i])
        {
            answer += s.top().second;
            s.pop();
        }

        if(!s.empty() && s.top().first == height[i])
        {
            count_pair = s.top().second + 1;
            answer += s.top().second;
            s.pop();

            if(!s.empty())
            {
                answer++;
            }
        }
        else if(!s.empty()) // 현재 숫자가 top보다 큰 경우임
        {
            answer++;
        }

        s.push({height[i], count_pair});
    }

    cout << answer << '\n';

    return 0;
}