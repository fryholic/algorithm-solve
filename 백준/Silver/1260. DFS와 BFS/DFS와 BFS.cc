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

    int N, M, V;

    cin >> N >> M >> V;

    bool visited[1001] = {false};
    vector<vector<int>> graph(N + 1); // 그래프 크기를 N + 1로 초기화
    vector<int> result_dfs;
    vector<int> result_bfs;
    queue<int> q;

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 1; i <= N; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    // DFS
    stack<int> s;
    s.push(V);
    visited[V] = true;
    result_dfs.push_back(V);

    while (!s.empty()) {
        int node = s.top();
        s.pop();

        for (int i = 0; i < graph[node].size(); i++) {
            if (!visited[graph[node][i]]) {
                visited[graph[node][i]] = true;
                result_dfs.push_back(graph[node][i]);
                s.push(node);
                s.push(graph[node][i]);
                break;
            }
        }
    }

    for (int i = 0; i < result_dfs.size(); i++) {
        cout << result_dfs[i] << " ";
    }
    cout << "\n";

    memset(visited, false, sizeof(visited)); // Reset visited array for BFS

    // BFS
    q.push(V);
    visited[V] = true;
    result_bfs.push_back(V);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int i = 0; i < graph[node].size(); i++) {
            if (!visited[graph[node][i]]) {
                visited[graph[node][i]] = true;
                result_bfs.push_back(graph[node][i]);
                q.push(graph[node][i]);
            }
        }
    }

    for (int i = 0; i < result_bfs.size(); i++) {
        cout << result_bfs[i] << " ";
    }
    cout << "\n";

    return 0;
}