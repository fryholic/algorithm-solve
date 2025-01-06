#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;



int people(int k, int n) {
    
    int sum = 0;

    if (k == 0) {
        return n;
    }
    
    for (int i = 1; i <= n; i++) {
        sum += people(k - 1, i);
    }

    return sum;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int T;
    int k = 0, n = 0;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> k >> n;
        //k -= 1; n -= 1;
        cout << people(k, n) << '\n';
        //sum = 0;
    }

    return 0;

}