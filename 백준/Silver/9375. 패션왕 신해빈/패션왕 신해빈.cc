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

    while (T--) {
        int n;
        cin >> n;

        unordered_map<string, int> clothes;

        for (int i = 0; i < n; i++) {
            string name, type;
            cin >> name >> type;
            clothes[type]++;
        }

        int result = 1;
        for (auto& pair : clothes) {
            result *= (pair.second + 1);
        }
        result -= 1;

        cout << result << '\n';
    }    

    return 0;

}