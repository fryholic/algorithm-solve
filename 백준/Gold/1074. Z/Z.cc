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
#include <cmath>


using namespace std;

int quad(int N, int r, int c) {
	int size = pow(2, N);

	if (r < size / 2) {
		if (c < size / 2) { // 2사분면 : 1
			return 1;
		}
		else { // 1사분면 : 2
			return 2;
		}
	}
	else {
		if (c < size / 2) { // 3사분면 : 3
			return 3;
		}
		else { // 4사분면 : 4
			return 4;
		}
	}
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int N, r, c;
  cin >> N >> r >> c;

  int seg = N;
  
  int flag = 0;
  while (seg) {
	  seg--;
	  int size = pow(2, N);
	  int quad_n = quad(N, r, c);
	  if (quad_n == 1) { // 2사분면
		  flag += 0;
	  }
	  else if (quad_n == 2) { // 1사분면
		  flag += pow(2, 2 * seg);;
		  c -= size / 2;
	  }
	  else if (quad_n == 3) { // 3사분면
		  flag += pow(2, 2 * seg + 1);
		  r -= size / 2;
	  }
	  else if (quad_n == 4) { // 4사분면
		  flag += pow(2, 2 * seg + 1) + pow(2, 2 * seg);
		  c -= size / 2;
		  r -= size / 2;
	  }
	  N--;
  }
  
  cout << flag << '\n';


  return 0;
}