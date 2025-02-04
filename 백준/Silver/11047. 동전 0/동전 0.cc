#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <cstring>
#include <queue>
#include <stack>

using namespace std;


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N, K;
    cin >> N >> K;

    int* coin = new int[N];
    fill_n(coin, N, 1);

    for (int i = N - 1; i >= 0; i--) {
        cin >> coin[i];
    }

    int Startidx = 0;
    while (1) {
        if (K - coin[Startidx] < 0) {
            Startidx++;
        }
        else {
            break;
        }
    }

    int coin_ans = 0;

    while (K) {
        int div = 0;
        div = K / coin[Startidx];
        K -= div * coin[Startidx];
        Startidx++;
        coin_ans += div;
    }

    cout << coin_ans;



    return 0;

}