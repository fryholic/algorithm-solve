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
    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    if (N <= 1) {
        cout << N;
        return 0;
    }

    int max_len = 1;
    int inc = 1, dec = 1;

    for (int i = 1; i < N; ++i) {
        int prev_inc = inc;
        int prev_dec = dec;

        if (arr[i] > arr[i - 1]) {
            inc = prev_inc + 1;
            dec = 1;           
        }
        else if (arr[i] < arr[i - 1]) {
            dec = prev_dec + 1;
            inc = 1;           
        }
        else {
            inc = prev_inc + 1;
            dec = prev_dec + 1;
        }

        max_len = max(max_len, max(inc, dec));
    }

    cout << max_len;
    return 0;

}