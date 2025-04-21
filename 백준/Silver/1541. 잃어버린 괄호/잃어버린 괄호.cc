#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <cstring>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    vector<int> num;
    vector<char> op;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '+' || s[i] == '-') {
            op.push_back(s[i]);
        }
        else {
            if (i == 0 || s[i > 0 ? i - 1 : 0] == '+' || s[i > 0 ? i - 1 : 0] == '-') {
                num.push_back(s[i] - '0');
            }
            else {
                num[num.size() - 1] = num[num.size() - 1] * 10 + (s[i] - '0');
            }
        }
    }

    int ans = num[0];

    int idx = 1;

    for (auto it = s.begin(); it != s.end(); it++) {
        if (*it == '+') {
            ans += num[idx];
            idx++;
        }

        if (*it == '-') {
            break;
        }
    }

    for (int i = idx; i < num.size(); i++) {
        ans -= num[i];
    }

    cout << ans;

    return 0;

}