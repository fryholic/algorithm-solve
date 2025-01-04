#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int L;
    string S;

    cin >> L >> S;

    int a[50];
    fill_n(a, 50, 0);

    int size = S.size();

    for (int i = 0; i < size; i++) {
        a[i] = (int)S[i] - 96;
        a[i] *= (int)pow(31, (double)i);
    }

    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += a[i];
    }

    int H = sum % 1234567891;

    cout << H;

    return 0;

}