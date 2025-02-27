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
    
    if (N <= 1) {
        cout << 0;
        return 0;
    }

    int* aN = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> aN[i];
    }

    int min_price = aN[0];
    int max_profit = 0;

    for (int i = 1; i < N; i++) {
        int current_profit = aN[i] - min_price;
        if (current_profit > max_profit) {
            max_profit = current_profit;
        }
        if (aN[i] < min_price) {
            min_price = aN[i];
        }
    }

    cout << max_profit;

    delete[] aN;

    return 0;

}