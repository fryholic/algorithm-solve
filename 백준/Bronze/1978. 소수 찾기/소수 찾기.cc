#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int P[1001];
    fill_n(P,1001,1);

    P[1] = 0;

    for(int i = 2; i <= 1001; i++){
        for(int j = i*2; j <= 1001; j += i){
            P[j] = 0;
        }
    }

    int N;
    int input[100];
    int count = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> input[i];
        if(P[input[i]] == 1){
            count++;
        }
    }

    cout << count;

    return 0;

}