#include <iostream>
#include <queue>
#include <string>
#include <sstream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cin.ignore(); // 개행 문자 제거

    queue<int> q;

    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        string cmd;
        ss >> cmd;

        if (cmd == "push") {
            int num;
            ss >> num;
            q.push(num);
        } else if (cmd == "pop") {
            if (q.empty()) {
                cout << "-1\n";
            } else {
                cout << q.front() << "\n";
                q.pop();
            }
        } else if (cmd == "size") {
            cout << q.size() << "\n";
        } else if (cmd == "empty") {
            cout << (q.empty() ? 1 : 0) << "\n";
        } else if (cmd == "front") {
            if (q.empty()) {
                cout << "-1\n";
            } else {
                cout << q.front() << "\n";
            }
        } else if (cmd == "back") {
            if (q.empty()) {
                cout << "-1\n";
            } else {
                cout << q.back() << "\n";
            }
        }
    }

    return 0;
}