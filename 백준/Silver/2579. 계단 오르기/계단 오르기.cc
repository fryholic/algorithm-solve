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

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N;
    cin >> N;

    int* stairs = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> stairs[i];
    }

    int* dp = new int[N];

    int count = 0;

    dp[0] = stairs[0];

    if (N >= 2) {
        dp[1] = stairs[0] + stairs[1];
    }
    
    if (N >= 3) {
        dp[2] = max(stairs[0] + stairs[2], stairs[1] + stairs[2]);
    }

    for (int i = 3; i < N; i++) {
        dp[i] = max(dp[i - 3] + stairs[i - 1] + stairs[i], dp[i - 2] + stairs[i]);
    }

    cout << dp[N - 1];

    delete[] stairs;
    
    delete[] dp;

    return 0;

}