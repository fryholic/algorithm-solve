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

    int N, L;
    cin >> N >> L;

    vector<int> A(N);

    deque<int> dq;

    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for(int i = 0; i < N; i++)
    {
        while(!dq.empty() && dq.front() < i - L + 1)
        {
            dq.pop_front();
        }

        while(!dq.empty() && A[dq.back()] > A[i])
        {
            dq.pop_back();
        }

        dq.push_back(i);

        cout << A[dq.front()] << " ";
    }

    return 0;
}