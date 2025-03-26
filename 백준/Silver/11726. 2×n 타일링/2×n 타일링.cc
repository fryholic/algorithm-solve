#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	int* fb = new int[n + 1];

	fb[0] = 0;
	fb[1] = 1;
	fb[2] = 2;
	
	for (int i = 3; i <= n; i++) {
		fb[i] = (fb[i - 1] + fb[i - 2]) % 10007;
	}

	cout << fb[n];

	delete[] fb;

	return 0;

}