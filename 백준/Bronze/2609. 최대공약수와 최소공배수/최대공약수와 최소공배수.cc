#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int A, B;
    cin >> A >> B;

    int mul = A * B;

    if (A < B) {
        int temp;
        temp = B;
        B = A;
        A = temp;
    }

    int max = -1;
    int min = -1;

    int temp = 0, mod = 0;

    while (1) {
        
        mod = A % B;
        if (mod == 0) {
            max = B;
            break;
        }

        A = B;
        B = mod;

    }
    
    min = mul / max;

    cout << max << '\n' << min;

    return 0;

}