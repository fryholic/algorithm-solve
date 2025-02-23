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

    long long int fib[82] = { 0 };

    fib[1] = 1;
    fib[2] = 1;

    for (int i = 3; i <= N + 1; i++) {
        fib[i] = fib[i - 2] + fib[i - 1];
    }

    long long int dist = 2 * (fib[N] + fib[N + 1]);

    cout << dist;

    return 0;

}