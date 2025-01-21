#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
        
    int N;

    unordered_map<int, int> um;

    cin >> N;

    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        um[temp] = 1;
    }

    int M;

    cin >> M;

    /*int* ans = new int[M];*/

    for (int i = 0; i < M; i++) {
        int temp;
        cin >> temp;
        
        if (um[temp]) {
            cout << 1 << '\n';
        }
        else {
            cout << 0 << '\n';
        }
    }

    /*for (int i = 0; i < M;) {

    }

    delete[] ans;*/

    return 0;

}