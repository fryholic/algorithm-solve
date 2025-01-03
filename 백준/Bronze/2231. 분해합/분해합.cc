#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    int ans = 0;
    for (int i = 1; i < N; i++) {
        int sum = 0;
        int num = i;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum + i == N) {
            ans = i;
            break;
        }
    }

    cout << ans;
    return 0;

}