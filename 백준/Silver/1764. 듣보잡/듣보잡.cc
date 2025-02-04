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
    
    int N, M;
    cin >> N >> M;

    map<string, int> d;

    for (int i = 0; i < N; i++) {
        string temp;
        cin >> temp;
        d[temp] = 1;
    }

    for (int i = 0; i < M; i++) {
        string temp;
        cin >> temp;
        d[temp]++;
    }

    int count = 0;
    vector<string> ans;

    for (auto iter = d.begin(); iter != d.end(); iter++) {
        if (iter->second == 2) {
            count++;
            ans.push_back(iter->first);
        }
    }
    cout << count << '\n';

    for (auto& i : ans) {
        cout << i << '\n';
    }




    return 0;

}