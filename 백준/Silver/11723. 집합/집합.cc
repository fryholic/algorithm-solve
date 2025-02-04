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
    
    int N;
    cin >> N;

    int S = 0;

    while (N--) {
        string com;
        cin >> com;

        if (com == "add") {
            int num;
            cin >> num;
            S |= (1 << (num - 1));
        }
        else if (com == "remove") {
            int num;
            cin >> num;
            S &= (~(1 << (num - 1)));
        }
        else if (com == "check") {
            int num;
            cin >> num;
            cout << ((S >> (num - 1)) & 1) << '\n';
        }
        else if (com == "toggle") {
            int num;
            cin >> num;
            S ^= (1 << (num - 1));
        }
        else if (com == "all") {
            S = 0xfffff;
        }
        else if (com == "empty") {
            S = 0;
        }
    }

    return 0;

}