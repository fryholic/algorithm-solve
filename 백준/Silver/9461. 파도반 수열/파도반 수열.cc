#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int T;
	cin >> T;
	
	long long int dp[101] = { 0 };

	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;
	dp[4] = 2;
	dp[5] = 2;

	for (int i = 6; i <= 100; i++) {
		dp[i] = dp[i - 2] + dp[i - 3];
	}


	while (T--) {
		int temp;
		cin >> temp;
		cout << dp[temp] << '\n';
	}

	return 0;

}