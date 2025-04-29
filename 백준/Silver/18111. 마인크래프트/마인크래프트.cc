#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <cstring>
#include <string>
#include <functional>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first) {
		return a.second > b.second;
	}
	return a.first < b.first;
}


int main() {
  ios::sync_with_stdio(0);

  cin.tie(0);

  int N, M, B;

  cin >> N >> M >> B;

  vector<int> map;

  for (int i = 0; i < N; i++) {
	  for (int j = 0; j < M; j++) {
		  int x;
		  cin >> x;
		  map.push_back(x);
	  }
  }

  int max_height = *max_element(map.begin(), map.end());
  int min_height = *min_element(map.begin(), map.end());

  int distance = max_height - min_height;

  vector<pair<int, int>> time_height;

  for (int i = 0; i <= distance; i++) {
	  int height = max_height - i;
	  int time = 0;
	  int block = B;

	  vector<int> block_dist;
	  for (int j = 0; j < map.size(); j++) {
		  int d = height - map[j];
		  block_dist.push_back(d);
	  }

	  for (int j = 0; j < block_dist.size(); j++) {
		  if (block_dist[j] < 0) {
			  time += abs(block_dist[j]) * 2;
			  block += abs(block_dist[j]);
			  
		  }
		  else if (block_dist[j] > 0) {
			  time += block_dist[j];
			  block -= block_dist[j];
		  }
	  }

	  if (block >= 0) {
		  time_height.push_back(make_pair(time, height));
	  }

  }

  sort(time_height.begin(), time_height.end(), cmp);

  cout << time_height[0].first << " " << time_height[0].second << "\n";

  return 0;
}