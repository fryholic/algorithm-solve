#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    int a[10001];
    fill_n(a, 10001, 0);

    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        a[temp]++;
    }

    for (int i = 1; i < 10001; i++) {
        if (a[i] == 0) continue;
        else {
            for (int j = 0; j < a[i]; j++) {
                cout << i << '\n';
            }
        }
    }
    

    return 0;

}