#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <string>
#include <cmath>
#include <bitset>

using namespace std;

int main() {
 ios::sync_with_stdio(0);
 cin.tie(0);
 
 int N, M;
 cin >> N >> M;

 string S;
 cin >> S;

 string Pn;
 int window = 2 * N + 1;

 for (int i = 0; i < window; i++) {
	 if (i % 2 == 0) Pn += 'I';
	 else Pn += 'O';
 }

 int count = 0;

 for (int i = 0; i < M; i++) {
	 string temp = S.substr(i, window);
	 if (temp == Pn) {
		 count++;
	 }
 }

 cout << count << "\n";
 return 0;
}