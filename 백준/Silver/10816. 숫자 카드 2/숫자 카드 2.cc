#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <cstring>

using namespace std;


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N;
    cin >> N;

    map<int, int> numcard;

    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        numcard[temp]++;
    }

    int M;
    cin >> M;

    int* findnum = new int[M];

    for (int i = 0; i < M ; i++) {
        cin >> findnum[i];
    }

    for (int i = 0; i < M; i++) {
        if (numcard.find(findnum[i]) != numcard.end()) {
            cout << numcard[findnum[i]] << ' ';
        }
        else {
            cout << 0 << ' ';
        }
    }







    delete[] findnum;

    return 0;

}