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
    
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        queue<pair<int, int>> q;
        priority_queue<int> pq;

        for (int i = 0; i < N; i++) {
            int priority;
            cin >> priority;
            q.push({ priority, i });
            pq.push(priority);
        }

        int cnt = 0;
        while (!q.empty()) {
            int current_priority = q.front().first;
            int current_index = q.front().second;

            if (current_priority < pq.top()) {
                q.push(q.front());
                q.pop();
            }
            else {
                cnt++;
                q.pop();
                pq.pop();
                if (current_index == M) {
                    cout << cnt << '\n';
                    break;
                }
            }
        }
    }

    

    return 0;

}