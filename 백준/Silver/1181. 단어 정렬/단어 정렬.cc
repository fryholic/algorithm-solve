#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
    if (a.size() == b.size()) {
        return a < b;
    }
    else {
        return a.size() < b.size();
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int T;
    cin >> T;

    vector<string> v;

    for (int i = 0; i < T; i++) {
        string temp;
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end(), compare);
    v.erase(unique(v.begin(), v.end()), v.end());

    for (auto a : v) {
        cout << a << '\n';
    }

    return 0;

}