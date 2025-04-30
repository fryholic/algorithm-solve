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

  vector<vector<char>> campus(N, vector<char>(M));

  int startX, startY;

  for (int i = 0; i < N; i++) {
	  for (int j = 0; j < M; j++) {
		  cin >> campus[i][j];
		  if (campus[i][j] == 'I') {
			  startX = i;
			  startY = j;
		  }
	  }
  }

  vector<vector<bool>> visited(N, vector<bool>(M, false));

  queue<pair<int, int>> q;

  q.push({ startX, startY });

  visited[startX][startY] = true;

  int dx[4] = { 1, -1, 0, 0 };

  int dy[4] = { 0, 0, 1, -1 };

  int people = 0;

  while (!q.empty()) {
	  auto cur = q.front();
	  q.pop();
	  for (int i = 0; i < 4; i++) {
		  int nx = cur.first + dx[i];
		  int ny = cur.second + dy[i];
		  if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
		  if (campus[nx][ny] == 'X') continue;
		  else {
			  if (visited[nx][ny] == false) {
				  if (campus[nx][ny] == 'P') {
					  people++;
				  }
				  visited[nx][ny] = true;
				  q.push({ nx, ny });
			  }
		  }
	  }
  }

  if (people == 0) {
	  cout << "TT";
  }
  else {
	  cout << people;
  }

  return 0;
}