#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <cstring>
#include <queue>
#include <stack>

using namespace std;

int dp[100001] = { 0 };

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N;
    cin >> N;

    

    dp[2] = 1;
    dp[4] = 2;
    dp[5] = 1;
    dp[6] = 3;
    dp[7] = 2;

    for (int i = 8; i <= N; i++) {
        bool canUse2 = (dp[i - 2] != 0);
        bool canUse5 = (dp[i - 5] != 0);

        if (canUse2 || canUse5) {
            if (canUse2 && canUse5) {
                dp[i] = min(dp[i - 2], dp[i - 5]) + 1;
            }
            else {
                dp[i] = (canUse2 ? dp[i - 2] : dp[i - 5]) + 1;
            }
        }
    }

    if (dp[N] != 0) {
        cout << dp[N];
    }
    else {
        cout << -1;
    }

    return 0;

}