#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <string>
#include <cmath>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int N, M;

  cin >> N >> M;

  vector<vector<int>> graph(N + 1, vector<int>(M + 1));

  for (int i = 1; i <= N; i++) {
	  string input;
	  cin >> input;
	  for (int j = 1; j <= M; j++) {
		  graph[i][j] = input[j - 1] - '0';
	  }
  }

  int dx[4] = { 1, -1, 0, 0 };
  int dy[4] = { 0, 0, 1, -1 };

  vector<vector<int>> visited(N + 1, vector<int>(M + 1, 0));

  visited[1][1] = 1;

  queue<pair<int, int>> q;
  q.push({ 1, 1 });

  while (!q.empty()) {
	  int x = q.front().first;
	  int y = q.front().second;
	  q.pop();
	  if (x == N && y == M) {
		  break;
	  }
	  for (int i = 0; i < 4; i++) {
		  int nx = x + dx[i];
		  int ny = y + dy[i];
		  if (nx < 1 || nx > N || ny < 1 || ny > M || graph[nx][ny] == 0) {
			  continue;
		  }
		  if (visited[nx][ny] == 0) {
			  visited[nx][ny] = visited[x][y] + 1;
			  q.push({ nx, ny });
		  }
	  }
  }

  cout << visited[N][M] << "\n";

  return 0;
}