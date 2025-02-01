#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <cstring>
#include <queue>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int M, N;
    cin >> M >> N;

    bool* is_prime = new bool[N + 1];
    fill_n(is_prime, N + 1, true);

    is_prime[1] = false;

    for (int i = 2; i <= sqrt(N); i++) {
        if (!is_prime[i]) continue;
        for (int j = 2; i * j <= N; j++) {
            is_prime[i * j] = false;
        }
    }

    for (int i = M; i <= N; i++) {
        if (is_prime[i]) {
            cout << i << '\n';
        }
    }

    delete[] is_prime;

    return 0;

}