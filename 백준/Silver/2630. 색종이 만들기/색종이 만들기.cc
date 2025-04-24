#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <cstring>
#include <string>
#include <functional>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;

	cin >> N;

    vector<vector<int>> paper(N, vector<int>(N));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> paper[i][j];
		}
	}

	int white = 0;
	int blue = 0;

	function<void(int, int, int)> divide = [&](int x, int y, int size) {
		bool isSame = true;
		int color = paper[x][y];
		for (int i = x; i < x + size; i++) {
			for (int j = y; j < y + size; j++) {
				if (paper[i][j] != color) {
					isSame = false;
					break;
				}
			}
			if (!isSame) break;
		}
		if (isSame) {
			if (color == 0) white++;
			else blue++;
		}
		else {
			divide(x, y, size / 2);
			divide(x, y + size / 2, size / 2);
			divide(x + size / 2, y, size / 2);
			divide(x + size / 2, y + size / 2, size / 2);
		}
	};	
	divide(0, 0, N);
	cout << white << "\n" << blue << "\n";

	return 0;

}