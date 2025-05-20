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
  
  int N;

  cin >> N;

  vector<vector<int>> graph(N + 1, vector<int>(N + 1));

  for (int i = 1; i <= N; i++) {
	  string input;
	  cin >> input;
	  for (int j = 1; j <= N; j++) {
		  graph[i][j] = input[j - 1] - '0';
	  }
  }

  int dx[4] = { 1, -1, 0, 0 };
  int dy[4] = { 0, 0, 1, -1 };

  vector<vector<bool>> visited(N + 1, vector<bool>(N + 1, false));

  vector<int> result;

  queue<pair<int, int>> q;

  for (int i = 1; i <= N; i++) {
	  for (int j = 1; j <= N; j++) {
		  if (graph[i][j] == 1 && !visited[i][j]) {
			  int count = 0;
			  q.push({ i, j });
			  visited[i][j] = true;
			  while (!q.empty()) {
				  int x = q.front().first;
				  int y = q.front().second;
				  q.pop();
				  count++;
				  for (int k = 0; k < 4; k++) {
					  int nx = x + dx[k];
					  int ny = y + dy[k];
					  if (nx < 1 || nx > N || ny < 1 || ny > N) continue;
					  if (graph[nx][ny] == 1 && !visited[nx][ny]) {
						  q.push({ nx, ny });
						  visited[nx][ny] = true;
					  }
				  }
			  }
			  result.push_back(count);
		  }
	  }
  }

  sort(result.begin(), result.end());

  cout << result.size() << '\n';

  for (int i : result) {
	  cout << i << '\n';
  }

  return 0;
}