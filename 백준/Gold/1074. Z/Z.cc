#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <string>
#include <cmath>

using namespace std;

int quad(int N, int r, int c) {
	int size = pow(2, N);
    if (r < size / 2) {
		if (c < size / 2) { // 2사분면
			return 1;
		}
		else { // 1사분면
			return 2;
		}
	}
	else {
		if (c < size / 2) { // 3사분면
			return 3;
		}
		else { // 4사분면
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
  while (N) {
       N--;
       int size = pow(2, N + 1);
       int quad_n = quad(N + 1, r, c);
       if (quad_n == 1) { // 2사분면
           flag += 0;
       }
       else if (quad_n == 2) { // 1사분면
           flag += pow(2, 2 * N);
           c -= size / 2;
       }
       else if (quad_n == 3) { // 3사분면
           flag += pow(2, 2 * N + 1);
           r -= size / 2;
       }
       else if (quad_n == 4) { // 4사분면
           flag += pow(2, 2 * N + 1) + pow(2, 2 * N);
           c -= size / 2;
           r -= size / 2;
       }
   }
  
  cout << flag << '\n';

  return 0;
}