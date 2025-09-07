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

    int n, k;
    cin >> n >> k;

    vector<int> coins;

    for(int i = 0; i < n; i++)
    {
        int coin_value;
        cin >> coin_value;
        coins.push_back(coin_value);
    }

    vector<int> dp(10001, 0);
    dp[0] = 1;

    for(int coin_value : coins)
    {
        for(int i = coin_value; i <= k; i++)
        {
            if(i - coin_value >= 0)
            {
                dp[i] += dp[i - coin_value];
            }
        }
    }

    cout << dp[k];

    return 0;
}