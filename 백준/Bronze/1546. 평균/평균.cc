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

    double sum = 0;
    int max = -1;
    for (int i = 0; i < N; i++) {
        double t;
        cin >> t;
        sum += t;
        if (t > max) {
            max = t;
        }
    }

    cout << sum / N / max * 100;

    return 0;

}