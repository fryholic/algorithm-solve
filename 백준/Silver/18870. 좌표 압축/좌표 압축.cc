#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <cstring>
#include <string>
#include <functional>

using namespace std;

bool compare_second(const pair<int, int>& a, const pair<int, int>& b) {
	return a.second < b.second;
}

bool compare_first(const pair<int, int>& a, const pair<int, int>& b) {
	return a.first < b.first;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N;

  vector<pair<int, int>> v(N);

  for (int i = 0; i < N; i++) {
	  v[i].first = i;
	  cin >> v[i].second;
  }

  sort(v.begin(), v.end(), compare_second);

  vector<pair<int, int>> v2(N);

  for (int i = 0; i < N; i++) {
	  v2[i].first = v[i].first;
	  
	  if (i == 0) {
		  v2[i].second = 0;
		  continue;
	  }
	  else if (i > 0) {
		  if (v[i].second == v[i - 1].second) {
			  v2[i].second = v2[i - 1].second;
		  }
		  else {
			  v2[i].second = v2[i - 1].second + 1;
		  }
	  }
	  
  }

  sort(v2.begin(), v2.end(), compare_first);

  vector<int> result(N);

  for (int i = 0; i < N; i++) {
	  result[v2[i].first] = v2[i].second;
  }

  for (int i = 0; i < N; i++) {
	  cout << result[i] << " ";
  }



  return 0;
}