#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N, M;
    int A[100];
    fill_n(A, 100, 0);
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int sum = 0;
    int ans = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                sum = A[i] + A[j] + A[k];
                if (sum >= ans && sum <= M) {
                    ans = sum;
                }
            }
        }
    }

    cout << ans;

    return 0;

}