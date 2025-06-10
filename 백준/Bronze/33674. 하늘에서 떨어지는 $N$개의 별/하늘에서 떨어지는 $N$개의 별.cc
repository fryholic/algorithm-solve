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

	int N, D, K;

	cin >> N >> D >> K;

	int max = 0;

	for (int i = 0; i < N; ++i) {
		int x;
		cin >> x;
		if (x > max) {
			max = x;
		}
	}

	int n = 0;
	while (true) {
		n++;
		if (max * n > K) {
			break;
		}
	}

	n--;

	int result = (D - 1) / n;

	cout << result << '\n';



	return 0;

}