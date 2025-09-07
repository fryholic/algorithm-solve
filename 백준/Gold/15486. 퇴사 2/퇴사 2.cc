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

    vector<int> dp(N + 2, 0);
    vector<int> T(N + 1, 0);
    vector<int> P(N + 1, 0);

    for(int i = 1; i <= N; i++)
    {
        cin >> T[i] >> P[i];
    }

    for(int i = N; i >= 1; i--)
    {
        if(i + T[i] - 1 <= N)
        {
            dp[i] = max(dp[i + 1], dp[i + T[i]] + P[i]);
        }
        else
        {
            dp[i] = dp[i + 1];
        }
    }

    int ans = 0;
    for(int i = 1; i <= N; i++)
    {
        ans = max(ans, dp[i]);
    }

    cout << ans << '\n';

    return 0;
}