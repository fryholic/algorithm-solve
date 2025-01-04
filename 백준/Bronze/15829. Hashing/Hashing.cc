#include <iostream>
#include <cmath>
#include <string>
#include <vector>

#define mod 1234567891

using namespace std;


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int L;
    string S;

    cin >> L >> S;

    long long int a[50];
    fill_n(a, 50, 0);

    int size = S.size();

    long long int sum = 0;

    for (int i = 0; i < size; i++) {
        a[i] = S[i] - 96;
        if (i == 0) {
            sum += a[i];
            continue;
        }
        for (int j = 0; j < i; j++) {
            a[i] = (a[i] * 31) % mod;
        }
        sum += a[i];
    }
    
    long long int H = sum % 1234567891;

    cout << H;

    return 0;

}