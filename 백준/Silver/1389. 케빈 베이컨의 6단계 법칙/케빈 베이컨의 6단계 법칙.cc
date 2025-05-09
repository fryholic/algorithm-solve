#include <iostream>
#include <vector>
#include <queue>
#include <deque>
#include <algorithm>
#include <stack>
#include <cstring>
#include <string>
#include <functional>
#include <numeric>

using namespace std;

int bfs(int start, vector<vector<int>>& relations) {
	vector<int> visited(relations.size(), 0);
	queue<int> q;

	q.push(start);
	visited[start] = 1;

	int total = 0;

	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		for (int i = 0; i < relations[cur].size(); i++) {
			int next = relations[cur][i];
			if (visited[next] == 0) {
				visited[next] = visited[cur] + 1;
				q.push(next);
			}
		}
	}

	total = accumulate(visited.begin(), visited.end(), 0); // 자기 자신 제외

	return total;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N, M;

  cin >> N >> M;

  vector<vector<int>> relations(N + 1);

  for (int i = 0; i < M; i++) {
	  int a, b;
	  cin >> a >> b;
	  relations[a].push_back(b);
	  relations[b].push_back(a);
  }

  int min = 2147483647;
  int bacon = 2147483647;

  for (int i = 1; i < relations.size(); i++) {
	  
	  int total = bfs(i, relations);
	  
	  //cout << i << " " << total << "\n";

	  if (min > total) {
		  min = total;
		  bacon = i;
	  }
	  else if (min == total) {
		  if (bacon > i) {
			  bacon = i;
		  }
	  }

  }

  cout << bacon;

  return 0;
}