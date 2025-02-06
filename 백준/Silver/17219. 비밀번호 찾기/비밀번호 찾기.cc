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

    unordered_map<string, string> note;

    for (int i = 0; i < N; i++) {
        string A, B;
        cin >> A >> B;
        note.insert({ A, B });
    }

    for (int i = 0; i < M; i++) {
        string quest;
        cin >> quest;
        cout << note[quest] << '\n';
    }

    return 0;

}