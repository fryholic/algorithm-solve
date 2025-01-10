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

    int count = 0;

    for (int i = 666; ; i++) {
        int temp = i;
        while (temp >= 666) {
            if (temp % 1000 == 666) {
                count++;
                break;
            }
            temp /= 10;
        }
        if (count == N) {
            cout << i;
            return 0;
        }
    }

    return 0;

}