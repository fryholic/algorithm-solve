#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <cstring>
#include <queue>
#include <stack>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int T;
    cin >> T;

    int pascal[30][30] = { 0 };
    pascal[1][0] = 1;
    pascal[1][1] = 1;

    for (int i = 2; i < 30; i++) {
        pascal[i][0] = 1;
        pascal[i][i] = 1;
        for (int j = 1; j < i; j++) {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }
    

    while (T--) {
        int p, q;
        cin >> p >> q;
        cout << pascal[q][p] << '\n';
    }

    return 0;

}