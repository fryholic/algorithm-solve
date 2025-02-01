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
    
    int N, K;
    cin >> N >> K;

    queue<int> queue;

    for (int i = 1; i <= N; i++) {
        queue.push(i);
    }

    cout << '<';

    while (!queue.empty()) {
        for (int i = 1; i < K; i++) {
            queue.push(queue.front());
            queue.pop();
        }
        cout << queue.front();

        if (queue.size() >= 2) {
            cout << ", ";
        }
        queue.pop();
    }

    cout << '>';

    return 0;

}