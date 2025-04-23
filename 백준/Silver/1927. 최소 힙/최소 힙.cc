#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <cstring>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

	priority_queue<int, vector<int>, greater<int>> heap;

    while (N--) {
        int op;
		cin >> op;

        if (op == 0) {
            if (heap.empty()) {
                cout << 0 << '\n';
            }
            else {
                cout << heap.top() << '\n';
                heap.pop();
            }
        }
        else {
            heap.push(op);
        }
    }

    return 0;

}