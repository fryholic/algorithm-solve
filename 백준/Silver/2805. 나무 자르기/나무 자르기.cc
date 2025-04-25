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

  vector<long long> tree(N);

  long long max_ = 0;
  long long min_ = 2147483647;

  for (int i = 0; i < N; i++) {
      cin >> tree[i];
      max_ = max(max_, tree[i]);
      min_ = min(min_, tree[i]); 
  }

  long long high = max_;
  long long low = 0;
  long long sum = 0;
  long long mid = 0;

  long long ans = 0;

  while (low <= high) {
      sum = 0;
      mid = (low + high) / 2;
      for (int i = 0; i < N; i++) {
          if (mid < tree[i]) {
              sum += tree[i] - mid;
          }
      }
      if (sum >= M) {
          ans = mid;
          low = mid + 1;
      }
      else {
          high = mid - 1; 
      }
  }

  cout << ans; 

  return 0;
}