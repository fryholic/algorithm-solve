#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <string>
#include <cmath>

#define step_one(x) (x - 1)
#define step_two(x) (x + 1)
#define step_three(x) (x * 2)

using namespace std;



int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int N, K;

  cin >> N >> K;

  if (N == K) {
	  cout << 0 << '\n';
	  return 0;
  }

  if (N > K) {
	  cout << N - K << '\n';
	  return 0;
  }
  
  

  bool arrived = false;
  vector<bool> visited(200001, false);

  queue<int> queue_prev;
  queue_prev.push(N);

  int time = 0;
  
  while (!arrived) {
	  int size = queue_prev.size();
	  queue<int> queue_next;
	  time++;
	  for (int i = 0; i < size; i++) {
		  int x = queue_prev.front();
		  queue_prev.pop();

		  int next_steps[3] = { step_one(x), step_two(x), step_three(x) };
		  for (int next : next_steps) {
			  if (next == K) {
				  arrived = true;
				  break;
			  }
			  if (next >= 0 && next <= 100000 && !visited[next]) {
				  visited[next] = true;
				  queue_next.push(next);
			  }
		  }
	  }
	  queue_prev.swap(queue_next);
  }

  cout << time << '\n';

  return 0;
}