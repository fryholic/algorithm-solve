#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    

    int A, B, V;
    cin >> A >> B >> V;

    if (V <= A) {
        cout << 1;
        return 0;
    }

    int C = ceil((double)(V - A) / (double)(A - B));
    cout << C + 1;
    

    return 0;

}