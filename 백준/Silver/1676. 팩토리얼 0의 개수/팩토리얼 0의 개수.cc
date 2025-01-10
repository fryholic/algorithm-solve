#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    if (N == 0) {
        cout << 0;
        return 0;
    }

    int two_count = 0;
    int five_count = 0;

    for (int i = 1; i <= N; i++) {
        int temp = i;
        
        if (temp % 2 == 0) {
            two_count++;
            temp /= 2;
            while (temp % 2 == 0) {
                temp /= 2;
                two_count++;
            }
        }

        if (temp % 5 == 0) {
            five_count++;
            temp /= 5;
            while (temp % 5 == 0) {
                temp /= 5;
                five_count++;
            }
        }
    }

    if (two_count > 0 && five_count > 0) {
        if (two_count > five_count) {
            cout << five_count;
        }
        else if (five_count > two_count) {
            cout << two_count;
        }
    }
    else {
        cout << 0;
    }

    return 0;

}