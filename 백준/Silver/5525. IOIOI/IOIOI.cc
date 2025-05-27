#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <random>
#include <cmath>
#include <limits>
#include <type_traits>
#include <utility>
#include <array>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>

using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, M;
	cin >> N >> M;

	string S;
	cin >> S;

	int ans = 0;


	for (int i = 0; i < M; i++) {
		int j = 0;
		if (S[i] == 'I') {
			while(i + 2 < M && S[i + 1] == 'O' && S[i + 2] == 'I') {
				j++;
				if (j == N) {
					ans++;
					j--;
				}
				i += 2;
			}
		}
	}

	cout << ans << '\n';

	return 0;

}