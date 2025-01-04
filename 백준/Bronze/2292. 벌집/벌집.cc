#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int lower_bound(int n) {
    int a = 3 * (int)pow((double)n, 2) - (3 * n) + 1;
    return a;
}

int upper_bound(int n) {
    int a = 3 * (int)pow((double)n, 2) + (3 * n) + 1;
    return a;
}


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    if (N == 1) {
        cout << 1;
        return 0;
    }
    for (int i = 0; i < 18258; i++) {
        if (N > lower_bound(i) && N <= upper_bound(i)) {
            cout << i+1;
            return 0;
        }
    }


    return 0;

}