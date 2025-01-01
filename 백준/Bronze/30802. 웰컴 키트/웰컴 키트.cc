#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N;
    int Size[6];
    int T;
    int P;

    cin >> N;
    for (int i = 0; i < 6; i++) {
        cin >> Size[i];
    }

    cin >> T >> P;

    int count_t = 0;
    int temp = 0;

    for (int i = 0; i < 6; i++) {
        
        temp = ceil((double)Size[i] / (double)T);
        count_t += temp;
    }

    int count_p_q, count_p_m;

    count_p_q = N / P;
    count_p_m = N % P;

    cout << count_t << '\n' << count_p_q << ' ' << count_p_m;

    return 0;

}