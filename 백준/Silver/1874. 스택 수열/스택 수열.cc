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

    vector<int> sequence(N);
    for (int i = 0; i < N; i++) {
        cin >> sequence[i];
    }

    stack<int> s;
    vector<char> result;
    int current_idx = 0;
    bool possible = true;

    vector<int> seq_list;
    seq_list = sequence;

    sort(seq_list.begin(), seq_list.end());

    for (int target : sequence) {
        while (seq_list[current_idx] <= target) {
            s.push(seq_list[current_idx]);
            result.push_back('+');
            if (current_idx < N - 1) current_idx++;
            else break;
        }

        if (s.empty()) {
            possible = false;
            break;
        }

        if (s.top() == target) {
            s.pop();
            result.push_back('-');
        }
        else {
            possible = false;
            break;
        }
    }

    if (possible) {
        for (char op : result) {
            cout << op << '\n';
        }
    }
    else {
        cout << "NO\n";
    }

    return 0;

}