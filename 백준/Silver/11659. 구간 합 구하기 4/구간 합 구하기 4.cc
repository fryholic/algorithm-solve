#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	cin >> N >> M;

	int* arr = new int[N];
	int* sum = new int[N + 1];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sum[1] = arr[0];
	sum[0] = 0;

	for (int i = 2; i <= N; i++) {
		sum[i] = sum[i - 1] + arr[i - 1];
	}

	while (M--) {
		int i, j;
		cin >> i >> j;
		int ans = sum[j] - sum[i - 1];
		cout << ans << '\n';
	}

	delete[] arr; delete[] sum;

	return 0;

}