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

	int n;
	cin >> n;

	int* dp = new int[n + 1];

	fill(dp, dp + n + 1, 5);

	dp[0] = 0;

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j * j <= i; ++j) {
			dp[i] = min(dp[i], dp[i - j * j] + 1);
		}
	}

	cout << dp[n];

	delete[] dp;



	return 0;

}