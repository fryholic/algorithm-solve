#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <cstring>
#include <string>
#include <functional>

using namespace std;

int main() {
  ios::sync_with_stdio(0);

  cin.tie(0);

  int N, M;

  cin >> N >> M;

  vector<vector<int>> graph(N + 1);
  vector<bool> visited(N + 1, false);

  int u, v;
  for (int i = 0; i < M; i++) {
	  cin >> u >> v;
	  graph[u].push_back(v);
	  graph[v].push_back(u);
  }

  int cnt = 0;

  for (int i = 1; i <= N; i++) {
	  if (!visited[i]) {
		  cnt++;
		  queue<int> q;
		  q.push(i);
		  visited[i] = true;
		  while (!q.empty()) {
			  int cur = q.front();
			  q.pop();
			  for (int j = 0; j < graph[cur].size(); j++) {
				  int next = graph[cur][j];
				  if (!visited[next]) {
					  visited[next] = true;
					  q.push(next);
				  }
			  }
		  }
	  }
  }

  cout << cnt << '\n';

  return 0;
}
