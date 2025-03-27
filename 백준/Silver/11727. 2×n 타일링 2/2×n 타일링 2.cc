#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	int* arr = new int[n + 1];

	arr[1] = 1;

	for (int i = 2; i <= n; i++) {
		arr[i] = ((2 * arr[i - 1]) + (i % 2 == 0 ? 1 : -1)) % 10007;
	}

	cout << arr[n];

	delete[] arr;




	return 0;
}